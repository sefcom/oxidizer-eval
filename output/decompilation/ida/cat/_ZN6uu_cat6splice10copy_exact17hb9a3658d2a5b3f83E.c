__int64 __fastcall uu_cat::splice::copy_exact(unsigned int a1, __int64 a2)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  bool v7; // zf
  __int64 v9; // [rsp+8h] [rbp-4070h]
  __int64 v10; // [rsp+10h] [rbp-4068h] BYREF
  char **v11; // [rsp+18h] [rbp-4060h] BYREF
  __int64 v12; // [rsp+20h] [rbp-4058h]
  __int64 v13; // [rsp+28h] [rbp-4050h]
  __int128 v14; // [rsp+30h] [rbp-4048h]
  _QWORD s[2054]; // [rsp+48h] [rbp-4030h] BYREF

  v3 = a1;
  memset(s, 0, 0x4000uLL);
LABEL_2:
  nix::unistd::read(&v11, v3, s, 0x4000LL);
  if ( ((unsigned __int8)v11 & 1) == 0 )
  {
    v9 = a2;
    v4 = v12;
    v10 = v12;
    if ( !v12 )
    {
      v11 = &off_EAA18;
      v12 = 1LL;
      v13 = 8LL;
      v14 = 0LL;
      core::panicking::assert_failed(1LL, &v10, "", &v11, &off_EAA28);
    }
    v5 = 0LL;
    while ( 1 )
    {
      v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             v5,
             v4,
             s,
             0x4000LL,
             &off_EAA40);
      nix::unistd::write(&v11, v6);
      if ( (_DWORD)v11 == 1 )
        break;
      if ( !v12 )
        uu_cat::splice::copy_exact::panic_cold_explicit();
      v5 += v12;
      if ( v5 >= v4 )
      {
        v7 = v9 == v4;
        a2 = v9 - v4;
        v3 = a1;
        if ( !v7 )
          goto LABEL_2;
        return 134LL;
      }
    }
  }
  return HIDWORD(v11);
}