__int64 __fastcall uu_ls::get_system_time(__int64 a1, char a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v6; // [rsp+8h] [rbp-20h] BYREF
  int v7; // [rsp+10h] [rbp-18h]

  switch ( a2 )
  {
    case 0:
      std::fs::Metadata::modified(&v6, a1);
      v2 = v6;
      if ( v7 == 1000000000 )
        goto LABEL_6;
      return v2;
    case 1:
      std::fs::Metadata::accessed(&v6, a1);
      v2 = v6;
      if ( v7 != 1000000000 )
        return v2;
      goto LABEL_6;
    case 2:
      v3 = core::time::Duration::new(*(_QWORD *)(a1 + 136), *(unsigned int *)(a1 + 144));
      return <std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(0LL, 0LL, v3, v4);
    case 3:
      std::fs::Metadata::created(&v6, a1);
      v2 = v6;
      if ( v7 == 1000000000 )
LABEL_6:
        core::ptr::drop_in_place<core::result::Result<std::time::SystemTime,std::io::error::Error>>(&v6);
      return v2;
  }
}