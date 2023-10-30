import B;
// If we import A the bug goes away.
//import A;

struct my_tag{};

int main()
{
    return bar<my_tag>;
}
