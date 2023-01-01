class Solution
{
public:
  int evalRPN(vector<string> &tokens)
  {
    stack<long long int> st;
    for (auto i : tokens)
    {
      if (i != "+" && i != "-" && i != "*" && i != "/")
        st.push(stoi(i));
      else
      {
        long long second = st.top();
        st.pop();
        long long first = st.top();
        st.pop();
        long long int val;
        if (i == "+")
          val = first + second;
        else if (i == "-")
          val = first - second;
        else if (i == "*")
          val = first * second;
        else
          val = first / second;
        st.push(val);
      }
    }
    return st.top();
  }
};