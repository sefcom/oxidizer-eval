
  int64_t alacritty::display::bell::VisualBell::ring::h00b9dcfa0acc9195(int64_t* arg1)

{
    int64_t rax;
    int32_t rdx;
    uint64_t zmm0[0x2];
    rax = std::time::Instant::now::h767314cc8c6c5886();
    arg1[2] = rax;
    arg1[3] = rdx;
    /* tailcall */
    return alacritty::display::bell::VisualBell::intensity_at_instant::h7ef172ac2da99aa5(arg1, rax, 
        rdx, zmm0);
}
