__int64 __fastcall uu_ls::get_system_time(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // [rsp+8h] [rbp-20h] BYREF
  int v7; // [rsp+10h] [rbp-18h]

  switch ( *(_BYTE *)(a2 + 243) )
  {
    case 0:
      std::fs::Metadata::modified(&v6, a1);
      goto LABEL_6;
    case 1:
      std::fs::Metadata::accessed(&v6, a1);
      goto LABEL_6;
    case 2:
      v2 = core::time::Duration::new(*(_QWORD *)(a1 + 136), *(unsigned int *)(a1 + 144));
      return <std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(0LL, 0LL, v2, v3);
    case 3:
      std::fs::Metadata::created(&v6, a1);
LABEL_6:
      result = v6;
      if ( v7 == 1000000000 )
      {
        v5 = v6;
        core::ptr::drop_in_place<core::result::Result<std::time::SystemTime,std::io::error::Error>>(&v6);
        return v5;
      }
      return result;
  }
}
