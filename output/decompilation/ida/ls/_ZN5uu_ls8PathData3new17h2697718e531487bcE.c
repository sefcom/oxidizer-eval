__int64 __fastcall uu_ls::PathData::new(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 *a4,
        char a5,
        char a6,
        unsigned __int8 a7)
{
  __int64 v7; // r14
  unsigned __int8 v11; // r8
  _BYTE *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int8 v19; // bp
  unsigned __int8 v20; // bp
  int file_type; // eax
  int v22; // ebp
  int v23; // edx
  unsigned __int8 v24; // r15
  __int128 v25; // xmm0
  __int64 result; // rax
  __int16 v27; // bp
  char v28; // [rsp+4h] [rbp-154h]
  __int128 v29; // [rsp+10h] [rbp-148h]
  __int64 v30; // [rsp+20h] [rbp-138h]
  __int64 v31; // [rsp+28h] [rbp-130h]
  __int128 v34; // [rsp+40h] [rbp-118h] BYREF
  __int128 v35; // [rsp+50h] [rbp-108h]
  __int64 v36; // [rsp+60h] [rbp-F8h]
  __int128 dest; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v38; // [rsp+80h] [rbp-D8h]
  __int64 v39; // [rsp+90h] [rbp-C8h]
  int v40; // [rsp+A8h] [rbp-B0h]

  v31 = *a4;
  if ( __OFSUB__(-*a4, 1LL) )
  {
    if ( a7 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&dest, v7, *(_QWORD *)(a2 + 16));
      v29 = dest;
      v30 = v38;
      v28 = 1;
      switch ( a6 )
      {
        case 0:
          goto LABEL_31;
        case 1:
          v28 = a6;
          goto LABEL_14;
        case 2:
          goto LABEL_19;
        case 3:
          goto LABEL_17;
      }
    }
    v7 = *(_QWORD *)(a2 + 8);
    v15 = *(_QWORD *)(a2 + 16);
    v16 = std::path::Path::file_name(v7, v15);
    if ( !v16 )
      v16 = uu_ls::PathData::new::{{closure}}(v7, v15);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, v16, v17);
    v29 = dest;
    v30 = v38;
    v28 = 1;
    v11 = 0;
    switch ( a6 )
    {
      case 0:
        goto LABEL_6;
      case 1:
        goto LABEL_12;
      case 2:
        goto LABEL_19;
      case 3:
        goto LABEL_17;
    }
  }
  v29 = *(_OWORD *)a4;
  v30 = a4[2];
  v28 = 0;
  v11 = 0;
  switch ( a6 )
  {
    case 0:
LABEL_6:
      v12 = a3;
      if ( (*a3 & 1) == 0 )
        goto LABEL_18;
      goto LABEL_7;
    case 1:
LABEL_12:
      if ( !a7 )
      {
LABEL_31:
        v11 = 0;
        v12 = a3;
        if ( (*a3 & 1) != 0 )
          goto LABEL_7;
        goto LABEL_18;
      }
      v7 = *(_QWORD *)(a2 + 8);
LABEL_14:
      v18 = v7;
      LOBYTE(v7) = 1;
      std::fs::metadata(&dest);
      if ( (_DWORD)dest != 2 )
      {
        v27 = v40;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v18);
        v11 = (v27 & 0xF000) == 0x4000;
        v12 = a3;
        if ( (*a3 & 1) != 0 )
          goto LABEL_7;
LABEL_18:
        *(_QWORD *)&v34 = 0LL;
        goto LABEL_25;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v18);
      v11 = 0;
      v12 = a3;
      if ( (*a3 & 1) == 0 )
        goto LABEL_18;
LABEL_7:
      v13 = *(_OWORD *)(v12 + 24);
      dest = *(_OWORD *)(v12 + 8);
      v39 = *((_QWORD *)v12 + 5);
      v38 = v13;
      if ( (_QWORD)dest )
      {
        v36 = *((_QWORD *)v12 + 5);
        v14 = *(_OWORD *)(v12 + 8);
        v35 = *(_OWORD *)(v12 + 24);
        v34 = v14;
      }
      else
      {
        *(_QWORD *)&v34 = 0LL;
        LODWORD(v7) = 0;
        v19 = v11;
        core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(&dest);
        v11 = v19;
      }
      if ( !(_QWORD)v34 )
      {
LABEL_25:
        v22 = 2;
        if ( (a5 & 1) == 0 )
          goto LABEL_24;
        goto LABEL_26;
      }
      v20 = v11;
      file_type = uu_ls::PathData::new::get_file_type(&v34, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), v11);
      v11 = v20;
      v22 = file_type;
      LODWORD(v7) = v23;
      if ( (a5 & 1) == 0 )
      {
LABEL_24:
        *(_QWORD *)&dest = 0LL;
        *((_QWORD *)&dest + 1) = 1LL;
        *(_QWORD *)&v38 = 0LL;
        goto LABEL_27;
      }
LABEL_26:
      v24 = v11;
      uu_ls::get_security_context(&dest, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), v11);
      v11 = v24;
LABEL_27:
      *(_QWORD *)(a1 + 288) = v36;
      v25 = v34;
      *(_OWORD *)(a1 + 272) = v35;
      *(_OWORD *)(a1 + 256) = v25;
      *(_OWORD *)(a1 + 48) = dest;
      *(_QWORD *)(a1 + 64) = v38;
      *(_QWORD *)(a1 + 72) = 3LL;
      *(_DWORD *)(a1 + 248) = v22;
      *(_DWORD *)(a1 + 252) = v7;
      *(_OWORD *)a1 = v29;
      *(_QWORD *)(a1 + 16) = v30;
      *(_OWORD *)(a1 + 24) = *(_OWORD *)a2;
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a1 + 296) = v11;
      result = a7;
      *(_BYTE *)(a1 + 297) = a7;
      if ( !__OFSUB__(-v31, 1LL) && (v28 & 1) != 0 )
        return core::ptr::drop_in_place<std::ffi::os_str::OsString>(v31, a4[1]);
      return result;
    case 2:
LABEL_19:
      v11 = a7;
      v12 = a3;
      if ( (*a3 & 1) == 0 )
        goto LABEL_18;
      goto LABEL_7;
    case 3:
LABEL_17:
      v11 = 1;
      v12 = a3;
      if ( (*a3 & 1) == 0 )
        goto LABEL_18;
      goto LABEL_7;
  }
}