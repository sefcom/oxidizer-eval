_OWORD *__fastcall uu_ls::dired::print_dired_output(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _OWORD *result; // rax
  __int128 v6; // xmm0
  _QWORD v7[2]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v8; // [rsp+10h] [rbp-68h]
  __int128 v9; // [rsp+20h] [rbp-58h]
  _QWORD v10[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a3);
  if ( v4 || (v4 = <std::io::stdio::Stdout as std::io::Write>::flush(a3 + 32)) != 0 )
  {
    *(_QWORD *)&v8 = 0x8000000000000000LL;
    *((_QWORD *)&v9 + 1) = v4;
    result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v6 = v8;
    result[1] = v9;
    *result = v6;
  }
  else
  {
    if ( *(_QWORD *)(a2 + 16) )
      uu_ls::dired::print_positions(anon_899730b44f50ab02bfd9ca63d23e76e8_36_llvm_11807341281290569930, 9LL, a2);
    if ( (*(_BYTE *)(a1 + 230) & 1) != 0 )
      uu_ls::dired::print_positions(anon_899730b44f50ab02bfd9ca63d23e76e8_37_llvm_11807341281290569930, 12LL, a2 + 24);
    v7[0] = a1 + 245;
    v7[1] = <uucore::features::quoting_style::QuotingStyle as core::fmt::Display>::fmt;
    v10[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_40_llvm_11807341281290569930;
    v10[1] = 2LL;
    v10[4] = 0LL;
    v10[2] = v7;
    v10[3] = 1LL;
    std::io::stdio::_print(v10);
    return 0LL;
  }
  return result;
}
