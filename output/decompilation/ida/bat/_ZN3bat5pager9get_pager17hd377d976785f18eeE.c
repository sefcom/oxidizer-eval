__int64 __fastcall bat::pager::get_pager(__int64 a1, __int64 a2, int a3)
{
  const char *v4; // r15
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  char v8; // r12
  unsigned __int8 v9; // bp
  __int64 v10; // r14
  char v11; // al
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v15; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+20h] [rbp-C8h]
  _QWORD v17[3]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v18[16]; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-90h]
  __int64 v20; // [rsp+60h] [rbp-88h]
  _BYTE v21[16]; // [rsp+68h] [rbp-80h] BYREF
  __int64 v22; // [rsp+78h] [rbp-70h]
  __int64 v23; // [rsp+80h] [rbp-68h]
  __int128 v24; // [rsp+88h] [rbp-60h] BYREF
  __int128 v25; // [rsp+98h] [rbp-50h]
  __int128 v26; // [rsp+A8h] [rbp-40h]
  __int64 v27; // [rsp+B8h] [rbp-30h]

  LODWORD(v4) = a2;
  std::env::var(v18, aBatPager_0, 9LL);
  std::env::var(v21, aPager_2, 5LL);
  v8 = 0;
  v9 = 0;
  if ( !a2 )
  {
    if ( (v18[0] & 1) == 0 )
    {
      LODWORD(v4) = v19;
      a3 = v20;
      v9 = 1;
      goto LABEL_6;
    }
    if ( (v21[0] & 1) != 0 )
    {
      v9 = 3;
      a3 = 4;
      v4 = aLess_0;
LABEL_6:
      v8 = 0;
      goto LABEL_8;
    }
    LODWORD(v4) = v22;
    a3 = v23;
    v9 = 2;
    v8 = 1;
  }
LABEL_8:
  shell_words::split((unsigned int)&v24, (_DWORD)v4, a3, v5, v6, v7);
  if ( __OFSUB__(0LL, (_QWORD)v24) )
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  else
  {
    v10 = v25;
    v16 = v25;
    v15 = v24;
    if ( (_QWORD)v25 )
    {
      v11 = bat::pager::PagerKind::from_bin(
              *(_QWORD *)(*((_QWORD *)&v15 + 1) + 8LL),
              *(_QWORD *)(*((_QWORD *)&v15 + 1) + 16LL));
      if ( !v8 || (unsigned __int8)v11 > 3u || v11 == 1 )
      {
        bat::pager::Pager::new(
          (__int64)&v24,
          *(_QWORD *)(*((_QWORD *)&v15 + 1) + 8LL),
          *(_QWORD *)(*((_QWORD *)&v15 + 1) + 16LL),
          *((_QWORD *)&v15 + 1) + 24LL,
          v10 - 1,
          v11,
          v9);
      }
      else
      {
        v17[0] = 0LL;
        v17[1] = 8LL;
        v17[2] = 0LL;
        bat::pager::Pager::new((__int64)&v24, (__int64)aLess_0, 4LL, 8LL, 0LL, 1, 2u);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v17);
      }
      *(_QWORD *)(a1 + 48) = v27;
      v12 = v24;
      v13 = v25;
      *(_OWORD *)(a1 + 32) = v26;
      *(_OWORD *)(a1 + 16) = v13;
      *(_OWORD *)a1 = v12;
    }
    else
    {
      *(_QWORD *)a1 = 0x8000000000000000LL;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v15);
  }
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v21);
  return core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v18);
}