__int64 __fastcall uu_cat::splice::copy_exact(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  __int64 v9; // [rsp+10h] [rbp-4068h] BYREF
  char **v10; // [rsp+18h] [rbp-4060h] BYREF
  __int64 v11; // [rsp+20h] [rbp-4058h]
  __int64 v12; // [rsp+28h] [rbp-4050h]
  __int128 v13; // [rsp+30h] [rbp-4048h]
  _QWORD s[2054]; // [rsp+48h] [rbp-4030h] BYREF

  v4 = a1;
  memset(s, 0, 0x4000uLL);
  if ( !a3 )
    return 134LL;
LABEL_2:
  nix::unistd::read(&v10, v4, s, 0x4000LL);
  if ( !(_DWORD)v10 )
  {
    v5 = v11;
    v9 = v11;
    if ( !v11 )
    {
      v10 = &off_1193A8;
      v11 = 1LL;
      v12 = 8LL;
      v13 = 0LL;
      core::panicking::assert_failed(1LL, &v9, &byte_AC40, &v10, &off_1193B8);
    }
    v6 = 0LL;
    while ( 1 )
    {
      v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, v5, s);
      nix::unistd::write(&v10, v7);
      if ( (_DWORD)v10 )
        break;
      if ( !v11 )
        uu_cat::splice::copy_exact::panic_cold_explicit();
      v6 += v11;
      if ( v6 >= v5 )
      {
        a3 -= v5;
        v4 = a1;
        if ( a3 )
          goto LABEL_2;
        return 134LL;
      }
    }
  }
  return HIDWORD(v10);
}
