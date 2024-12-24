__int64 __fastcall uu_split::split(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 (__fastcall **v5)(); // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  unsigned __int8 v18; // bl
  unsigned __int8 v19; // bl
  unsigned __int8 v20; // bl
  __int64 v22; // [rsp+8h] [rbp-230h] BYREF
  __int64 *v23; // [rsp+10h] [rbp-228h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+18h] [rbp-220h]
  __int128 v25; // [rsp+20h] [rbp-218h] BYREF
  __int64 **v26; // [rsp+30h] [rbp-208h]
  __int128 v27; // [rsp+38h] [rbp-200h]
  __int128 v28; // [rsp+48h] [rbp-1F0h]
  __int128 v29; // [rsp+58h] [rbp-1E0h]
  __int128 v30; // [rsp+68h] [rbp-1D0h]
  __int128 v31; // [rsp+78h] [rbp-1C0h]
  __int128 v32; // [rsp+88h] [rbp-1B0h]
  __int128 v33; // [rsp+98h] [rbp-1A0h]
  __int128 v34; // [rsp+A8h] [rbp-190h]
  __int128 v35; // [rsp+B8h] [rbp-180h] BYREF
  __int64 **v36; // [rsp+C8h] [rbp-170h]
  __int128 v37; // [rsp+D0h] [rbp-168h]
  __int128 v38; // [rsp+E0h] [rbp-158h]
  __int128 v39; // [rsp+F0h] [rbp-148h]
  __int128 v40; // [rsp+100h] [rbp-138h]
  __int128 v41; // [rsp+110h] [rbp-128h]
  __int128 v42; // [rsp+120h] [rbp-118h]
  __int128 v43; // [rsp+130h] [rbp-108h]
  __int128 v44; // [rsp+140h] [rbp-F8h]
  _BYTE v45[56]; // [rsp+150h] [rbp-E8h] BYREF
  __int128 v46; // [rsp+188h] [rbp-B0h] BYREF
  __int64 **v47; // [rsp+198h] [rbp-A0h]
  __int128 v48; // [rsp+1A0h] [rbp-98h] BYREF
  __int64 **v49; // [rsp+1B0h] [rbp-88h]
  __int128 v50; // [rsp+1B8h] [rbp-80h] BYREF
  __int64 **v51; // [rsp+1C8h] [rbp-70h]
  _BYTE v52[24]; // [rsp+1D0h] [rbp-68h] BYREF
  _BYTE v53[24]; // [rsp+1E8h] [rbp-50h] BYREF
  _BYTE v54[56]; // [rsp+200h] [rbp-38h] BYREF

  v1 = a1[15];
  v2 = a1[16];
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v2, asc_219A5, 1LL) )
  {
    v3 = std::io::stdio::stdin();
    v4 = alloc::boxed::Box<T>::new(v3);
    v5 = (__int64 (__fastcall **)())&unk_148B60;
  }
  else
  {
    std::fs::File::open(&v25, v1, v2);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v35,
      &v25,
      a1);
    v6 = v35;
    if ( (_QWORD)v35 )
      return v6;
    v4 = alloc::boxed::Box<T>::new(DWORD2(v35));
    v5 = &off_148B08;
  }
  v7 = 0x2000LL;
  if ( *a1 )
    v7 = a1[1];
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v45, v7, v4, v5);
  v8 = a1[2];
  v9 = 3LL;
  if ( (unsigned __int64)(v8 - 6) < 3 )
    v9 = v8 - 6;
  v10 = a1[3];
  switch ( v9 )
  {
    case 0LL:
      uu_split::LineChunkWriter::new((__int64)&v25, a1[3], (__int64)a1);
      v6 = *((_QWORD *)&v25 + 1);
      if ( (_QWORD)v25 != 0x8000000000000000LL )
      {
        v44 = v34;
        v43 = v33;
        v42 = v32;
        v41 = v31;
        v40 = v30;
        v39 = v29;
        v38 = v28;
        v37 = v27;
        v35 = v25;
        v36 = v26;
        if ( std::io::copy::generic_copy(v45, &v35) )
        {
          v22 = v11;
          if ( (unsigned __int8)std::io::error::Error::kind(v11) == 39 )
          {
            v23 = &v22;
            v24 = <std::io::error::Error as core::fmt::Display>::fmt;
            *(_QWORD *)&v25 = &xmmword_183B0;
            *((_QWORD *)&v25 + 1) = 1LL;
            v26 = &v23;
            v27 = 1uLL;
            core::option::Option<T>::map_or_else(&v46, 0LL, &v25);
            LODWORD(v27) = 1;
            v25 = v46;
            v26 = v47;
            v6 = alloc::boxed::Box<T>::new(&v25);
            v12 = v22;
          }
          else
          {
            v12 = v22;
            v19 = std::io::error::Error::kind(v22);
            *(_QWORD *)&v25 = &off_148BB8;
            *((_QWORD *)&v25 + 1) = 1LL;
            v26 = (__int64 **)&byte_8;
            v27 = 0LL;
            core::option::Option<T>::map_or_else(v52, aInputOutputErr, &v25);
            v6 = uucore::mods::error::UIoError::new(v19, v52);
          }
          core::ptr::drop_in_place<std::io::error::Error>(v12);
        }
        else
        {
          v6 = 0LL;
        }
        core::ptr::drop_in_place<uu_split::LineChunkWriter>(&v35);
      }
      break;
    case 1LL:
      uu_split::ByteChunkWriter::new((__int64)&v25, a1[3], (__int64)a1);
      v6 = *((_QWORD *)&v25 + 1);
      if ( (_QWORD)v25 != 0x8000000000000000LL )
      {
        v44 = v34;
        v43 = v33;
        v42 = v32;
        v41 = v31;
        v40 = v30;
        v39 = v29;
        v38 = v28;
        v37 = v27;
        v35 = v25;
        v36 = v26;
        if ( std::io::copy::generic_copy(v45, &v35) )
        {
          v22 = v16;
          if ( (unsigned __int8)std::io::error::Error::kind(v16) == 39 )
          {
            v23 = &v22;
            v24 = <std::io::error::Error as core::fmt::Display>::fmt;
            *(_QWORD *)&v25 = &xmmword_183B0;
            *((_QWORD *)&v25 + 1) = 1LL;
            v26 = &v23;
            v27 = 1uLL;
            core::option::Option<T>::map_or_else(&v48, 0LL, &v25);
            LODWORD(v27) = 1;
            v25 = v48;
            v26 = v49;
            v6 = alloc::boxed::Box<T>::new(&v25);
            v17 = v22;
          }
          else
          {
            v17 = v22;
            v20 = std::io::error::Error::kind(v22);
            *(_QWORD *)&v25 = &off_148BB8;
            *((_QWORD *)&v25 + 1) = 1LL;
            v26 = (__int64 **)&byte_8;
            v27 = 0LL;
            core::option::Option<T>::map_or_else(v53, aInputOutputErr, &v25);
            v6 = uucore::mods::error::UIoError::new(v20, v53);
          }
          core::ptr::drop_in_place<std::io::error::Error>(v17);
        }
        else
        {
          v6 = 0LL;
        }
        core::ptr::drop_in_place<uu_split::ByteChunkWriter>(&v35);
      }
      break;
    case 2LL:
      uu_split::LineBytesChunkWriter::new((__int64)&v25, a1[3], (__int64)a1);
      v6 = *((_QWORD *)&v25 + 1);
      if ( (_QWORD)v25 != 0x8000000000000000LL )
      {
        v44 = v34;
        v43 = v33;
        v42 = v32;
        v41 = v31;
        v40 = v30;
        v39 = v29;
        v38 = v28;
        v37 = v27;
        v35 = v25;
        v36 = v26;
        if ( std::io::copy::generic_copy(v45, &v35) )
        {
          v22 = v13;
          if ( (unsigned __int8)std::io::error::Error::kind(v13) == 39 )
          {
            v23 = &v22;
            v24 = <std::io::error::Error as core::fmt::Display>::fmt;
            *(_QWORD *)&v25 = &xmmword_183B0;
            *((_QWORD *)&v25 + 1) = 1LL;
            v26 = &v23;
            v27 = 1uLL;
            core::option::Option<T>::map_or_else(&v50, 0LL, &v25);
            LODWORD(v27) = 1;
            v25 = v50;
            v26 = v51;
            v6 = alloc::boxed::Box<T>::new(&v25);
            v14 = v22;
          }
          else
          {
            v14 = v22;
            v18 = std::io::error::Error::kind(v22);
            *(_QWORD *)&v25 = &off_148BB8;
            *((_QWORD *)&v25 + 1) = 1LL;
            v26 = (__int64 **)&byte_8;
            v27 = 0LL;
            core::option::Option<T>::map_or_else(v54, aInputOutputErr, &v25);
            v6 = uucore::mods::error::UIoError::new(v18, v54);
          }
          core::ptr::drop_in_place<std::io::error::Error>(v14);
        }
        else
        {
          v6 = 0LL;
        }
        core::ptr::drop_in_place<uu_split::LineBytesChunkWriter>(&v35);
      }
      break;
    case 3LL:
      switch ( v8 )
      {
        case 0LL:
          v15 = uu_split::n_chunks_by_byte((__int64)a1, v45, a1[3], 0LL, v10);
          break;
        case 1LL:
          v15 = uu_split::n_chunks_by_byte((__int64)a1, v45, a1[4], 1LL, v10);
          break;
        case 2LL:
          JUMPOUT(0xCE6AALL);
        case 3LL:
          JUMPOUT(0xCE6C5LL);
        case 4LL:
          JUMPOUT(0xCE693LL);
        case 5LL:
          v15 = uu_split::n_chunks_by_line_round_robin((__int64)a1, (__int64)v45, a1[4], 1LL, v10);
          break;
      }
      v6 = v15;
      break;
  }
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v45);
  return v6;
}
