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
        char a10)
{
  unsigned __int64 v11; // rdx
  char v12; // r12
  char v13; // r13
  char v14; // bp
  unsigned __int64 v15; // r14
  __int64 v21; // r14
  __int64 v22; // r15
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdi
  unsigned __int8 v37; // [rsp+8h] [rbp-60h]
  unsigned __int8 v38; // [rsp+8h] [rbp-60h]
  char v40; // [rsp+10h] [rbp-58h]
  __int64 v41; // [rsp+10h] [rbp-58h]
  __int64 v44; // [rsp+18h] [rbp-50h] BYREF
  __int64 v45; // [rsp+20h] [rbp-48h]
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]
  __int64 v47; // [rsp+30h] [rbp-38h]

  if ( a6 )
  {
    if ( a6 == 1 )
    {
      if ( !a7 )
      {
        if ( a10 )
        {
          if ( !uu_cp::platform::linux::copy_fifo_contents(a2, a3, a4, a5) )
          {
            v14 = 3;
            v12 = 4;
            v13 = 2;
            goto LABEL_70;
          }
          goto LABEL_32;
        }
        v41 = a3;
        v21 = a4;
        v22 = a5;
        uu_cp::platform::linux::handle_reflink_auto_sparse_always((__int64)&v44, a2, a3, a4, a5);
        LOBYTE(v47) = v44;
        if ( (_BYTE)v44 )
        {
          v13 = 2;
          v12 = 4;
          v14 = 0;
        }
        else
        {
          v14 = BYTE1(v44);
          v12 = BYTE2(v44);
          v13 = BYTE3(v44);
          if ( BYTE4(v44) == 1 )
            goto LABEL_52;
        }
        v27 = uu_cp::platform::linux::clone(a2, v41, v21, v22, 2);
        goto LABEL_63;
      }
      if ( a7 == 1 )
      {
        if ( a10 )
        {
          if ( !uu_cp::platform::linux::copy_fifo_contents(a2, a3, a4, a5) )
          {
            v12 = 4;
            v13 = 1;
            v14 = 4;
LABEL_70:
            *(_BYTE *)(a1 + 8) = v14;
            *(_BYTE *)(a1 + 9) = v12;
            *(_BYTE *)(a1 + 10) = v13;
            *(_QWORD *)a1 = 13LL;
            return a1;
          }
          goto LABEL_32;
        }
        v41 = a3;
        v21 = a4;
        v22 = a5;
        uu_cp::platform::linux::handle_reflink_auto_sparse_auto((__int64)&v44);
        LOBYTE(v47) = v44;
        if ( (_BYTE)v44 )
        {
          v13 = 1;
          v12 = 4;
          v14 = 0;
        }
        else
        {
          v14 = BYTE1(v44);
          v12 = BYTE2(v44);
          v13 = BYTE3(v44);
          if ( BYTE4(v44) == 3 )
          {
            v27 = uu_cp::platform::linux::clone(a2, v41, v21, v22, 3);
LABEL_63:
            v15 = v27;
            v28 = v45;
            v29 = (unsigned __int8)v47;
            goto LABEL_64;
          }
        }
LABEL_52:
        v27 = uu_cp::platform::linux::clone(a2, v41, v21, v22, 1);
        goto LABEL_63;
      }
      if ( !a10 )
      {
        uu_cp::platform::linux::handle_reflink_auto_sparse_never((__int64)&v44);
        v37 = v44;
        v14 = BYTE1(v44);
        v40 = BYTE3(v44);
        LOBYTE(v47) = BYTE2(v44);
        v15 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 1);
        if ( v37 )
          v14 = 0;
        v12 = v47;
        if ( v37 )
          v12 = 1;
        v13 = v40;
        if ( v37 )
          v13 = 1;
        core::ptr::drop_in_place<core::result::Result<uu_cp::CopyDebug,std::io::error::Error>>(v37, v45);
LABEL_65:
        if ( !v15 )
          goto LABEL_70;
        goto LABEL_66;
      }
      goto LABEL_31;
    }
    if ( a7 )
    {
      if ( a7 == 1 )
      {
        if ( !a10 )
        {
          uu_cp::platform::linux::handle_reflink_never_sparse_auto((__int64)&v44);
          LOBYTE(v47) = v44;
          if ( (_BYTE)v44 )
          {
            v12 = 1;
            v14 = 0;
            v13 = 1;
          }
          else
          {
            v14 = BYTE1(v44);
            v12 = BYTE2(v44);
            v13 = BYTE3(v44);
            if ( BYTE4(v44) == 3 )
            {
              v15 = uu_cp::platform::linux::sparse_copy_without_hole(a2, a3, a4, a5);
              v28 = v45;
              v29 = 0LL;
LABEL_64:
              core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(
                v29,
                v28);
              goto LABEL_65;
            }
          }
          if ( std::fs::copy(a2, a3, a4, a5) )
          {
            v15 = v30;
            v31 = v45;
            v32 = (unsigned __int8)v47;
LABEL_58:
            core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(
              v32,
              v31);
            goto LABEL_66;
          }
          v34 = v45;
          v35 = (unsigned __int8)v47;
          goto LABEL_69;
        }
      }
      else if ( !a10 )
      {
        v47 = a4;
        uu_cp::platform::linux::handle_reflink_never_sparse_never((__int64)&v44);
        v38 = v44;
        v13 = BYTE3(v44);
        if ( (_BYTE)v44 )
          v13 = 1;
        v12 = BYTE2(v44);
        if ( (_BYTE)v44 )
          v12 = 1;
        v14 = BYTE1(v44);
        if ( (_BYTE)v44 )
          v14 = 0;
        if ( !std::fs::copy(a2, a3, v47, a5) )
        {
          core::ptr::drop_in_place<core::result::Result<uu_cp::CopyDebug,std::io::error::Error>>(v38, v45);
          goto LABEL_70;
        }
        v15 = v26;
        core::ptr::drop_in_place<core::result::Result<uu_cp::CopyDebug,std::io::error::Error>>(v38, v45);
        goto LABEL_66;
      }
LABEL_31:
      if ( !uu_cp::platform::linux::copy_fifo_contents(a2, a3, a4, a5) )
      {
        v14 = 3;
        v13 = 1;
        v12 = 1;
        goto LABEL_70;
      }
LABEL_32:
      v15 = v11;
LABEL_66:
      v44 = a8;
      v45 = a9;
      v46 = v15;
      <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(a1, &v44);
      return a1;
    }
    if ( a10 )
    {
      if ( !uu_cp::platform::linux::copy_fifo_contents(a2, a3, a4, a5) )
      {
        v14 = 3;
        v12 = 1;
        v13 = 2;
        goto LABEL_70;
      }
      goto LABEL_32;
    }
    uu_cp::platform::linux::handle_reflink_never_sparse_always((__int64)&v44);
    LOBYTE(v47) = v44;
    if ( (_BYTE)v44 )
    {
      v13 = 2;
      v12 = 1;
      v14 = 0;
    }
    else
    {
      v14 = BYTE1(v44);
      v12 = BYTE2(v44);
      v13 = BYTE3(v44);
      if ( BYTE4(v44) == 1 )
      {
        if ( std::fs::copy(a2, a3, a4, a5) )
        {
          v15 = v33;
          v31 = v45;
          v32 = 0LL;
          goto LABEL_58;
        }
        v34 = v45;
        v35 = 0LL;
LABEL_69:
        core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(
          v35,
          v34);
        goto LABEL_70;
      }
    }
    v27 = uu_cp::platform::linux::sparse_copy(a2, a3, a4, a5);
    goto LABEL_63;
  }
  if ( a7 == 1 )
  {
    v14 = 0;
    v15 = uu_cp::platform::linux::clone(a2, a3, a4, a5, 0);
    v12 = 2;
    v13 = 1;
    goto LABEL_65;
  }
  <uu_cp::Error as core::convert::From<&str>>::from(a1, aReflinkAlwaysC, 54LL);
  return a1;
}
