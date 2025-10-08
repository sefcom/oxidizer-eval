
  int64_t uu_du::file_as_vec::he8743ad0d34e58bd(int64_t* arg1, void* arg2)

{
    void var_40;
    std::fs::File::open::h0a597ac115f1ffeb(&var_40, arg2);
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h278545cd756cb2f0(&var_40, 
        core::result::Result$LT$T$C$E$GT$::expect::h1d96fd39a300f49c(&var_40));
    return core::iter::traits::iterator::Iterator::collect::he041ac547f577d16(arg1, &var_40);
}
