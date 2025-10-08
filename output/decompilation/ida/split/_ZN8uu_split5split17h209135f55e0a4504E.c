__int64 __fastcall uu_split::split(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 (__fastcall **v5)(); // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int128 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 v24; // bl
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int8 v28; // bl
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // [rsp+8h] [rbp-200h] BYREF
  __int64 *v33; // [rsp+10h] [rbp-1F8h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+18h] [rbp-1F0h]
  __int128 v35; // [rsp+20h] [rbp-1E8h] BYREF
  __int64 **v36; // [rsp+30h] [rbp-1D8h]
  __int128 v37; // [rsp+38h] [rbp-1D0h]
  __int128 v38; // [rsp+48h] [rbp-1C0h]
  __int128 v39; // [rsp+58h] [rbp-1B0h]
  __int128 v40; // [rsp+68h] [rbp-1A0h]
  __int128 v41; // [rsp+78h] [rbp-190h]
  __int128 v42; // [rsp+88h] [rbp-180h]
  __int128 v43; // [rsp+98h] [rbp-170h]
  __int128 v44; // [rsp+A8h] [rbp-160h]
  _BYTE v45[56]; // [rsp+B8h] [rbp-150h] BYREF
  __int128 v46; // [rsp+F0h] [rbp-118h] BYREF
  __int64 **v47; // [rsp+100h] [rbp-108h]
  __int128 v48; // [rsp+108h] [rbp-100h]
  __int128 v49; // [rsp+118h] [rbp-F0h]
  __int128 v50; // [rsp+128h] [rbp-E0h]
  __int128 v51; // [rsp+138h] [rbp-D0h]
  __int128 v52; // [rsp+148h] [rbp-C0h]
  __int128 v53; // [rsp+158h] [rbp-B0h]
  __int128 v54; // [rsp+168h] [rbp-A0h]
  __int128 v55; // [rsp+178h] [rbp-90h]
  __int128 v56; // [rsp+188h] [rbp-80h] BYREF
  __int64 **v57; // [rsp+198h] [rbp-70h]
  __int128 v58; // [rsp+1A0h] [rbp-68h] BYREF
  __int64 **v59; // [rsp+1B0h] [rbp-58h]
  _BYTE v60[24]; // [rsp+1B8h] [rbp-50h] BYREF
  _BYTE v61[56]; // [rsp+1D0h] [rbp-38h] BYREF

  v1 = a1[15];
  v2 = a1[16];
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, asc_1CA61, 1LL) )
  {
    v3 = std::io::stdio::stdin();
    v4 = alloc::boxed::Box<T>::new(v3);
    v5 = (__int64 (__fastcall **)())&unk_10B190;
    v6 = 0x2000LL;
    if ( *(_BYTE *)a1 )
LABEL_3:
      v6 = a1[1];
  }
  else
  {
    std::fs::File::open(&v35, v1, v2);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v46,
      &v35,
      v1,
      v2);
    v12 = v46;
    if ( (_QWORD)v46 )
      return v12;
    v4 = alloc::boxed::Box<T>::new(DWORD2(v46));
    v5 = &off_10B138;
    v6 = 0x2000LL;
    if ( *(_BYTE *)a1 )
      goto LABEL_3;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v45, v6, v4, v5);
  v7 = a1[2];
  v8 = 3LL;
  if ( (unsigned __int64)(v7 - 6) < 3 )
    v8 = v7 - 6;
  v9 = a1[3];
  switch ( v8 )
  {
    case 0LL:
      v10 = (__int128 *)a1[3];
      uu_split::LineChunkWriter::new((__int64)&v35, (__int64)v10, (__int64)a1);
      v12 = *((_QWORD *)&v35 + 1);
      v13 = -(__int64)v35;
      if ( !__OFSUB__(-(__int64)v35, 1LL) )
      {
        v55 = v44;
        v54 = v43;
        v53 = v42;
        v52 = v41;
        v51 = v40;
        v50 = v39;
        v49 = v38;
        v48 = v37;
        v46 = v35;
        v47 = v36;
        v10 = &v46;
        if ( (std::io::copy::generic_copy(v45, &v46, v11, v13) & 1) == 0 )
        {
          v12 = 0LL;
          goto LABEL_33;
        }
        v32 = v14;
        if ( (unsigned __int8)std::io::error::Error::kind(v14) == 40 )
        {
          v33 = &v32;
          v34 = <std::io::error::Error as core::fmt::Display>::fmt;
          *(_QWORD *)&v35 = &unk_1ADF0;
          *((_QWORD *)&v35 + 1) = 1LL;
          v36 = &v33;
          v37 = 1uLL;
          v10 = 0LL;
          core::option::Option<T>::map_or_else(&v56, 0LL, &v35, v15, v16, v17);
          LODWORD(v37) = 1;
          v35 = v56;
          v36 = v57;
          v12 = alloc::boxed::Box<T>::new(&v35);
        }
        else
        {
          v24 = std::io::error::Error::kind(v32);
          *(_QWORD *)&v35 = &off_10B128;
          *((_QWORD *)&v35 + 1) = 1LL;
          v36 = (__int64 **)&byte_8;
          v37 = 0LL;
          core::option::Option<T>::map_or_else(v60, aInputOutputErr, &v35, v25, v26, v27);
          v10 = (__int128 *)v60;
          v12 = uucore::mods::error::UIoError::new(v24, v60);
        }
        goto LABEL_32;
      }
      break;
    case 1LL:
      v10 = (__int128 *)a1[3];
      uu_split::ByteChunkWriter::new((__int64)&v35, (__int64)v10, (__int64)a1);
      v12 = *((_QWORD *)&v35 + 1);
      v13 = -(__int64)v35;
      if ( !__OFSUB__(-(__int64)v35, 1LL) )
      {
        v55 = v44;
        v54 = v43;
        v53 = v42;
        v52 = v41;
        v51 = v40;
        v50 = v39;
        v49 = v38;
        v48 = v37;
        v46 = v35;
        v47 = v36;
        v10 = &v46;
        if ( (std::io::copy::generic_copy(v45, &v46, v11, v13) & 1) != 0 )
        {
          v32 = v20;
          if ( (unsigned __int8)std::io::error::Error::kind(v20) == 40 )
          {
            v33 = &v32;
            v34 = <std::io::error::Error as core::fmt::Display>::fmt;
            *(_QWORD *)&v35 = &unk_1ADF0;
            *((_QWORD *)&v35 + 1) = 1LL;
            v36 = &v33;
            v37 = 1uLL;
            v10 = 0LL;
            core::option::Option<T>::map_or_else(&v58, 0LL, &v35, v21, v22, v23);
            LODWORD(v37) = 1;
            v35 = v58;
            v36 = v59;
            v12 = alloc::boxed::Box<T>::new(&v35);
          }
          else
          {
            v28 = std::io::error::Error::kind(v32);
            *(_QWORD *)&v35 = &off_10B128;
            *((_QWORD *)&v35 + 1) = 1LL;
            v36 = (__int64 **)&byte_8;
            v37 = 0LL;
            core::option::Option<T>::map_or_else(v61, aInputOutputErr, &v35, v29, v30, v31);
            v10 = (__int128 *)v61;
            v12 = uucore::mods::error::UIoError::new(v28, v61);
          }
LABEL_32:
          core::ptr::drop_in_place<std::io::error::Error>(&v32);
        }
        else
        {
          v12 = 0LL;
        }
LABEL_33:
        core::ptr::drop_in_place<uu_split::ByteChunkWriter>(&v46);
      }
      break;
    case 2LL:
      v10 = (__int128 *)v45;
      v18 = uu_split::line_bytes(a1, (__int64)v45, a1[3]);
      goto LABEL_15;
    case 3LL:
      switch ( v7 )
      {
        case 0LL:
          v10 = (__int128 *)v45;
          v18 = uu_split::n_chunks_by_byte(a1, v45, a1[3], 0LL, v9);
          break;
        case 1LL:
          v10 = (__int128 *)v45;
          v18 = uu_split::n_chunks_by_byte(a1, v45, a1[4], 1LL, v9);
          break;
        case 2LL:
          v10 = (__int128 *)v45;
          v18 = uu_split::n_chunks_by_line((__int64)a1, v45, a1[3], 0LL, v9);
          break;
        case 3LL:
          v10 = (__int128 *)v45;
          v18 = uu_split::n_chunks_by_line((__int64)a1, v45, a1[4], 1LL, v9);
          break;
        case 4LL:
          v10 = (__int128 *)v45;
          v18 = uu_split::n_chunks_by_line_round_robin((__int64)a1, (__int64)v45, a1[3], 0LL, v9);
          break;
        case 5LL:
          v10 = (__int128 *)v45;
          v18 = uu_split::n_chunks_by_line_round_robin((__int64)a1, (__int64)v45, a1[4], 1LL, v9);
          break;
      }
LABEL_15:
      v12 = v18;
      break;
  }
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(
    v45,
    v10,
    v11,
    v13);
  return v12;
}