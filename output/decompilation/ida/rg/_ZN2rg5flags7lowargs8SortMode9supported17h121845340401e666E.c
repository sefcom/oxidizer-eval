__int64 __fastcall rg::flags::lowargs::SortMode::supported(char a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v21; // [rsp+8h] [rbp-1C0h] BYREF
  int v22; // [rsp+10h] [rbp-1B8h]
  __int64 v23; // [rsp+18h] [rbp-1B0h] BYREF
  char v24; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v25; // [rsp+30h] [rbp-198h] BYREF
  char v26; // [rsp+38h] [rbp-190h] BYREF
  __int64 v27; // [rsp+48h] [rbp-180h] BYREF
  char v28; // [rsp+50h] [rbp-178h] BYREF
  _QWORD src[22]; // [rsp+60h] [rbp-168h] BYREF
  _QWORD dest[23]; // [rsp+110h] [rbp-B8h] BYREF

  switch ( a1 )
  {
    case 0:
      return 0LL;
    case 1:
      std::env::current_exe(&v23);
      if ( __OFSUB__(0LL, v23) )
      {
        v17 = (__int64 *)&v24;
LABEL_19:
        v21 = *v17;
LABEL_20:
        v20 = v21;
        src[0] = &v20;
        src[1] = <std::io::error::Error as core::fmt::Display>::fmt;
        dest[0] = &off_3EB478;
        dest[1] = 1LL;
        dest[4] = 0LL;
        dest[2] = src;
        dest[3] = 1LL;
        v18 = anyhow::__private::format_err(dest, a2, v13, v14, v15, v16);
        goto LABEL_21;
      }
      a2 = &v23;
      rg::flags::lowargs::SortMode::supported::{{closure}}(src, &v23);
      if ( LODWORD(src[0]) == 2 )
      {
        v17 = &src[1];
        goto LABEL_19;
      }
      memcpy(dest, src, 0xB0uLL);
      a2 = dest;
      std::fs::Metadata::modified(&v21, dest);
      if ( v22 == 1000000000 )
        goto LABEL_20;
      return 0LL;
    case 2:
      std::env::current_exe(&v25);
      if ( __OFSUB__(0LL, v25) )
      {
        v7 = (__int64 *)&v26;
LABEL_11:
        v21 = *v7;
LABEL_12:
        v20 = v21;
        src[0] = &v20;
        src[1] = <std::io::error::Error as core::fmt::Display>::fmt;
        dest[0] = &off_3EB488;
        dest[1] = 1LL;
        dest[4] = 0LL;
        dest[2] = src;
        dest[3] = 1LL;
        v18 = anyhow::__private::format_err(dest, a2, v3, v4, v5, v6);
        goto LABEL_21;
      }
      a2 = &v25;
      rg::flags::lowargs::SortMode::supported::{{closure}}(src, &v25);
      if ( LODWORD(src[0]) == 2 )
      {
        v7 = &src[1];
        goto LABEL_11;
      }
      memcpy(dest, src, 0xB0uLL);
      a2 = dest;
      std::fs::Metadata::accessed(&v21, dest);
      if ( v22 == 1000000000 )
        goto LABEL_12;
      return 0LL;
    case 3:
      std::env::current_exe(&v27);
      if ( __OFSUB__(0LL, v27) )
      {
        v12 = (__int64 *)&v28;
LABEL_15:
        v21 = *v12;
        goto LABEL_16;
      }
      a2 = &v27;
      rg::flags::lowargs::SortMode::supported::{{closure}}(src, &v27);
      if ( LODWORD(src[0]) == 2 )
      {
        v12 = &src[1];
        goto LABEL_15;
      }
      memcpy(dest, src, 0xB0uLL);
      a2 = dest;
      std::fs::Metadata::created(&v21, dest);
      if ( v22 != 1000000000 )
        return 0LL;
LABEL_16:
      v20 = v21;
      src[0] = &v20;
      src[1] = <std::io::error::Error as core::fmt::Display>::fmt;
      dest[0] = &off_3EB498;
      dest[1] = 1LL;
      dest[4] = 0LL;
      dest[2] = src;
      dest[3] = 1LL;
      v18 = anyhow::__private::format_err(dest, a2, v8, v9, v10, v11);
LABEL_21:
      v19 = v18;
      core::ptr::drop_in_place<std::io::error::Error>(&v20);
      return v19;
  }
}