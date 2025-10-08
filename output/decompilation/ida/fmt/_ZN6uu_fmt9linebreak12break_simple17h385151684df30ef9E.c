__int64 __fastcall uu_fmt::linebreak::break_simple(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+10h] [rbp-18h] BYREF
  char v9; // [rsp+18h] [rbp-10h]

  v7[0] = a1;
  v7[1] = a2;
  core::iter::traits::iterator::Iterator::try_fold(&v8, v7, *(_QWORD *)(a3 + 32), a3);
  if ( v9 == 2 )
    return v8;
  v5 = *(_QWORD **)(a3 + 24);
  v6 = v5[2];
  if ( (unsigned __int64)(*v5 - v6) <= 1 )
    return std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v5, asc_19C48, 1LL);
  *(_BYTE *)(v5[1] + v6) = 10;
  v5[2] = v6 + 1;
  return 0LL;
}