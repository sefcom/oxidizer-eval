long long bat::output::OutputType::stdout(unsigned long long a0[2])
{
    unsigned long long v1;  // rax

    v1 = std::io::stdio::stdout();
    a0[1] = v1;
    a0[0] = 5;
    return v1;
}
