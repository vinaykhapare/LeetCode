class Solution {
    public String convertDateToBinary(String date) 
    {
        String[] part = date.split("-");

        int year = Integer.parseInt(part[0]);
        int month = Integer.parseInt(part[1]);
        int day = Integer.parseInt(part[2]);

        String yearbin = Integer.toBinaryString(year);
        String monthbin = Integer.toBinaryString(month);
        String daybin = Integer.toBinaryString(day);
        
        return (yearbin + "-" + monthbin + "-" + daybin);
    }
}