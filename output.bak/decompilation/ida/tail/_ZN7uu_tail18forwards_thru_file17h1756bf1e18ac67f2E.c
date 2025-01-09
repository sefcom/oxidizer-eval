__int64 __fastcall uu_tail::forwards_thru_file(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // r14
  __int64 v14; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+8h] [rbp-70h]
  __int64 v16; // [rsp+10h] [rbp-68h]
  _QWORD v17[12]; // [rsp+18h] [rbp-60h] BYREF

  v5 = 0x2000LL;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v17, 0x2000LL, a1);
  v14 = 0LL;
  v15 = 1LL;
  v16 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  do
  {
    v11 = <u64 as core::iter::range::Step>::forward_unchecked(v11, v5, v6, v7, v8, v9, v14, v15, v16);
    v5 = a3;
    v12 = std::io::read_until(v17, a3, &v14);
    if ( v12 )
      break;
    if ( !v6 )
      break;
    v10 += v6;
    v16 = 0LL;
  }
  while ( v11 < a2 );
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v14);
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut std::fs::File>>(v17[0], v17[1]);
  return v12;
}
