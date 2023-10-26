import B;

int main()
{
    if (auto r = bar()) {
        return *r;
    } else {
        return r.error();
    }
}
