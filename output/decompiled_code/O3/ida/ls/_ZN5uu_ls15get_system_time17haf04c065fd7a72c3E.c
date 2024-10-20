__int64 __fastcall uu_ls::get_system_time(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  bool v6; // cf
  __int64 result; // rax
  char **v8; // r14
  char **v9; // [rsp+8h] [rbp-40h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  __int64 v11; // [rsp+18h] [rbp-30h]
  __int128 v12; // [rsp+20h] [rbp-28h]

  switch ( *(_BYTE *)(a2 + 243) )
  {
    case 0:
      v2 = a1;
      std::fs::Metadata::modified(&v9, a1);
      goto LABEL_8;
    case 1:
      v2 = a1;
      std::fs::Metadata::accessed(&v9, a1);
      goto LABEL_8;
    case 2:
      v3 = *(_QWORD *)(a1 + 136);
      v4 = *(_DWORD *)(a1 + 144);
      if ( v4 >= 0x3B9ACA00 )
      {
        v5 = v4 / 0x3B9ACA00uLL;
        v6 = __CFADD__(v5, v3);
        v3 += v5;
        if ( v6 )
        {
          v9 = &anon_60228f449dc895d2dc805d475020a4e5_12_llvm_15718868642555390090;
          v10 = 1LL;
          v11 = 8LL;
          v12 = 0LL;
          core::panicking::panic_fmt(&v9, &anon_60228f449dc895d2dc805d475020a4e5_14_llvm_15718868642555390090);
        }
      }
      return <std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(0LL, 0LL, v3);
    case 3:
      v2 = a1;
      std::fs::Metadata::created(&v9, a1);
LABEL_8:
      result = (__int64)v9;
      if ( (_DWORD)v10 == 1000000000 )
      {
        v8 = v9;
        core::ptr::drop_in_place<std::io::error::Error>(&v9, v2);
        return (__int64)v8;
      }
      return result;
  }
}
