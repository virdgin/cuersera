/*The drawing below gives an idea of how to cut a given "true" rectangle into squares
("true" rectangle meaning that the two dimensions are different).
Can you translate this drawing into an algorithm?
You will be given two dimensions
1.a positive integer length
2.a positive integer width
You will return a collection or a string (depending on the language; Shell bash,
 PowerShell, Pascal and Fortran return a string) with the size of each of the squares.
 sqInRect(5, 3) should return [3, 2, 1, 1]
sqInRect(3, 5) should return [3, 2, 1, 1]
 */

#include <vector>

class SqInRect
{
public:
    static std::vector<int> sqInRect(int lng, int wdth)
    {
        std::vector<int> result = {};
        if (lng == wdth || lng == 0 || wdth == 0)
            return result;
        if (lng < wdth)
        {
            int t = wdth;
            wdth = lng;
            lng = t;
        }
        while (wdth > 0)
        {
            result.push_back(wdth);
            int temp = wdth;
            wdth = lng - wdth;
            lng = temp;
            if (lng < wdth)
            {
                int t = wdth;
                wdth = lng;
                lng = t;
            }
        }

        return result;
    }
};