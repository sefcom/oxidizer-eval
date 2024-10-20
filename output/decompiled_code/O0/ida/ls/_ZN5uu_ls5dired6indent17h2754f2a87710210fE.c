_OWORD *__fastcall uu_ls::dired::indent(__int64 a1)
{
  __int64 v1; // rax
  _OWORD *result; // rax
  __int128 v3; // [rsp+0h] [rbp-58h]
  __int128 v4; // [rsp+10h] [rbp-48h]
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-20h]

  v5[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_32_llvm_11807341281290569930;
  v5[1] = 1LL;
  v5[2] = 8LL;
  v6 = 0LL;
  v1 = std::io::Write::write_fmt(a1, v5);
  if ( !v1 )
    return 0LL;
  *(_QWORD *)&v3 = 0x8000000000000000LL;
  *((_QWORD *)&v4 + 1) = v1;
  result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  result[1] = v4;
  *result = v3;
  return result;
}
