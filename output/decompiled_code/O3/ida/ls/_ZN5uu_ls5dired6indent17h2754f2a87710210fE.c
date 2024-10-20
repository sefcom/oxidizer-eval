_OWORD *__fastcall uu_ls::dired::indent(__int64 a1)
{
  __int64 v1; // rax
  _OWORD *result; // rax
  __int128 v3; // xmm0
  __int128 v4; // [rsp+0h] [rbp-38h] BYREF
  _OWORD v5[2]; // [rsp+10h] [rbp-28h]

  *(_QWORD *)&v4 = &anon_e31c85536e11aee39654ff72a53ef708_4_llvm_4239552918814193354;
  *((_QWORD *)&v4 + 1) = 1LL;
  v5[0] = 8uLL;
  v1 = std::io::Write::write_fmt(a1, &v4);
  if ( !v1 )
    return 0LL;
  *(_QWORD *)&v4 = 0x8000000000000000LL;
  *((_QWORD *)&v5[0] + 1) = v1;
  result = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v3 = v4;
  result[1] = v5[0];
  *result = v3;
  return result;
}
