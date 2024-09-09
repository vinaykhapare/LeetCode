class Solution {
    public String defangIPaddr(String address) {
        StringBuilder sb = new StringBuilder();
        String str = "[.]";
        for(int i =0; i<address.length(); i++)
        {
            char ch = address.charAt(i);
            if(ch == '.')
            {
                sb.append(str);
            }
            else
            {
                sb.append(ch);
            }
        }
        return sb.toString();
    }
}