#include <string>
using namespace std;

class Database{
    private:
        int recent_user(string name);
        string recent_user_name();
    public:
        int create_user_database(string player_name);
        int add_to_inventory(string itemName, string got = "true");

};