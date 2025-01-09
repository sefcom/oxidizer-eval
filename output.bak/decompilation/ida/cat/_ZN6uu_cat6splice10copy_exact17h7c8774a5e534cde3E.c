__int64 __fastcall uu_cat::splice::copy_exact(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // [rsp+10h] [rbp-4068h] BYREF
  char **v11; // [rsp+18h] [rbp-4060h] BYREF
  __int64 v12; // [rsp+20h] [rbp-4058h]
  __int64 v13; // [rsp+28h] [rbp-4050h]
  __int128 v14; // [rsp+30h] [rbp-4048h]
  _QWORD s[2054]; // [rsp+48h] [rbp-4030h] BYREF

  v4 = a1;
  memset(s, 0, 0x4000uLL);
  if ( !a3 )
    return 134LL;
LABEL_2:
  nix::unistd::read(&v11, v4, s, 0x4000LL);
  if ( !(_DWORD)v11 )
  {
    v5 = v12;
    v10 = v12;
    if ( !v12 )
    {
      v11 = &off_118990;
      v12 = 1LL;
      v13 = 8LL;
      v14 = 0LL;
      core::panicking::assert_failed(&v10, &v11, &off_1189A0);
    }
    v6 = 0LL;
    while ( 1 )
    {
      v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, v5, s);
      nix::unistd::write(&v11, a2, v7, v8);
      if ( (_DWORD)v11 )
        break;
      if ( !v12 )
        uu_cat::splice::copy_exact::panic_cold_explicit();
      v6 += v12;
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
  return HIDWORD(v11);
}
