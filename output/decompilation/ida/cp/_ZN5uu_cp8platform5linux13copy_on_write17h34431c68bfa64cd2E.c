__int64 __fastcall uu_cp::platform::linux::copy_on_write(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11)
{
  unsigned __int64 v11; // rdx
  char v12; // r12
  char v13; // r13
  char v14; // bp
  unsigned __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 result; // rax
  char v22; // bp
  __int16 v23; // kr00_2
  char v24; // al
  __int64 v25; // r14
  __int64 v26; // r15
  char v28; // al
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+8h] [rbp-70h]
  _QWORD v35[3]; // [rsp+18h] [rbp-60h] BYREF
  char v36; // [rsp+37h] [rbp-41h]
  __int64 v37; // [rsp+38h] [rbp-40h]
  __int64 v38; // [rsp+40h] [rbp-38h]

  if ( !a6 )
  {
    if ( a7 != 1 )
      return <uu_cp::Error as core::convert::From<&str>>::from(a1, aReflinkAlwaysC, 54LL);
    v37 = a8;
    v38 = a9;
    v14 = 0;
    v15 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 0);
    v12 = 2;
    v13 = 1;
    if ( !v15 )
      goto LABEL_66;
    goto LABEL_65;
  }
  if ( a6 != 1 )
  {
    if ( a7 )
    {
      if ( a7 != 1 )
      {
        if ( a11 )
          goto LABEL_32;
        v37 = a8;
        v38 = a9;
        uu_cp::platform::linux::handle_reflink_auto_sparse_never(v35);
        v13 = BYTE3(v35[0]);
        if ( LOBYTE(v35[0]) )
          v13 = 1;
        v12 = BYTE2(v35[0]);
        if ( LOBYTE(v35[0]) )
          v12 = 1;
        v14 = BYTE1(v35[0]);
        if ( LOBYTE(v35[0]) )
          v14 = 0;
        v28 = std::fs::copy(a2, a3, a4, a5);
LABEL_59:
        if ( (v28 & 1) == 0 )
        {
          core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(v35);
          goto LABEL_66;
        }
        v15 = v29;
        core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(v35);
LABEL_65:
        v35[0] = v37;
        v35[1] = v38;
        v35[2] = v15;
        return <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a1, v35);
      }
      if ( a11 )
        goto LABEL_32;
      v37 = a8;
      v38 = a9;
      v31 = a3;
      v16 = a4;
      v17 = a5;
      uu_cp::platform::linux::handle_reflink_never_sparse_auto(v35);
      if ( LOBYTE(v35[0]) )
      {
        v12 = 1;
        v14 = 0;
        v13 = 1;
      }
      else
      {
        v14 = BYTE1(v35[0]);
        v12 = BYTE2(v35[0]);
        v13 = BYTE3(v35[0]);
        if ( BYTE4(v35[0]) == 3 )
        {
          v30 = uu_cp::platform::linux::sparse_copy_without_hole(a2, v31, v16, v17);
          goto LABEL_63;
        }
      }
LABEL_58:
      v28 = std::fs::copy(a2, v31, v16, v17);
      goto LABEL_59;
    }
    if ( a11 )
    {
      if ( (uu_cp::platform::linux::copy_stream(a2, a3, a4, a5, a10) & 1) == 0 )
      {
        v14 = 3;
        v12 = 1;
        v13 = 2;
        goto LABEL_66;
      }
      goto LABEL_33;
    }
    v37 = a8;
    v38 = a9;
    v31 = a3;
    v16 = a4;
    v17 = a5;
    uu_cp::platform::linux::handle_reflink_never_sparse_always(v35);
    if ( LOBYTE(v35[0]) )
    {
      v13 = 2;
      v12 = 1;
      v14 = 0;
    }
    else
    {
      v14 = BYTE1(v35[0]);
      v12 = BYTE2(v35[0]);
      v13 = BYTE3(v35[0]);
      if ( BYTE4(v35[0]) == 1 )
        goto LABEL_58;
    }
    v30 = uu_cp::platform::linux::sparse_copy(a2, v31, v16, v17);
    goto LABEL_63;
  }
  if ( !a7 )
  {
    if ( a11 )
    {
      if ( (uu_cp::platform::linux::copy_stream(a2, a3, a4, a5, a10) & 1) == 0 )
      {
        v14 = 3;
        v12 = 4;
        v13 = 2;
        goto LABEL_66;
      }
      goto LABEL_33;
    }
    v37 = a8;
    v38 = a9;
    v32 = a3;
    v25 = a4;
    v26 = a5;
    uu_cp::platform::linux::handle_reflink_auto_sparse_always(v35);
    if ( LOBYTE(v35[0]) )
    {
      v13 = 2;
      v12 = 4;
      v14 = 0;
    }
    else
    {
      v14 = BYTE1(v35[0]);
      v12 = BYTE2(v35[0]);
      v13 = BYTE3(v35[0]);
      if ( BYTE4(v35[0]) == 1 )
        goto LABEL_52;
    }
    v30 = uu_cp::platform::linux::clone(a2, v32, v25, v26, 2);
    goto LABEL_63;
  }
  if ( a7 != 1 )
  {
    if ( !a11 )
    {
      v37 = a8;
      v38 = a9;
      uu_cp::platform::linux::handle_reflink_auto_sparse_never(v35);
      v36 = v35[0];
      v22 = BYTE1(v35[0]);
      v23 = WORD1(v35[0]);
      v15 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 1);
      v24 = v22;
      v14 = 0;
      if ( !v36 )
        v14 = v24;
      v12 = v23;
      if ( v36 )
        v12 = 1;
      v13 = HIBYTE(v23);
      if ( v36 )
        v13 = 1;
LABEL_64:
      core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(v35);
      if ( !v15 )
        goto LABEL_66;
      goto LABEL_65;
    }
LABEL_32:
    if ( (uu_cp::platform::linux::copy_stream(a2, a3, a4, a5, a10) & 1) == 0 )
    {
      v14 = 3;
      v13 = 1;
      v12 = 1;
      goto LABEL_66;
    }
    goto LABEL_33;
  }
  if ( !a11 )
  {
    v37 = a8;
    v38 = a9;
    v32 = a3;
    v25 = a4;
    v26 = a5;
    uu_cp::platform::linux::handle_reflink_auto_sparse_auto(v35);
    if ( LOBYTE(v35[0]) )
    {
      v13 = 1;
      v12 = 4;
      v14 = 0;
    }
    else
    {
      v14 = BYTE1(v35[0]);
      v12 = BYTE2(v35[0]);
      v13 = BYTE3(v35[0]);
      if ( BYTE4(v35[0]) == 3 )
      {
        v30 = uu_cp::platform::linux::clone(a2, v32, v25, v26, 3);
LABEL_63:
        v15 = v30;
        goto LABEL_64;
      }
    }
LABEL_52:
    v30 = uu_cp::platform::linux::clone(a2, v32, v25, v26, 1);
    goto LABEL_63;
  }
  if ( (uu_cp::platform::linux::copy_stream(a2, a3, a4, a5, a10) & 1) != 0 )
  {
LABEL_33:
    v15 = v11;
    v37 = a8;
    v38 = a9;
    goto LABEL_65;
  }
  v12 = 4;
  v13 = 1;
  v14 = 4;
LABEL_66:
  *(_BYTE *)(a1 + 8) = v14;
  *(_BYTE *)(a1 + 9) = v12;
  *(_BYTE *)(a1 + 10) = v13;
  result = 0x800000000000000CLL;
  *(_QWORD *)a1 = 0x800000000000000CLL;
  return result;
}