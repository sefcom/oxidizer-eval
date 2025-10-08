__int64 __fastcall uu_pinky::platform::unix::Pinky::long_pinky(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // r14d
  unsigned int v7; // r14d
  char v8; // [rsp+Dh] [rbp-1EBh]
  char v9; // [rsp+Eh] [rbp-1EAh]
  char v10; // [rsp+Fh] [rbp-1E9h]
  __int128 v11; // [rsp+10h] [rbp-1E8h] BYREF
  __int128 *v12; // [rsp+20h] [rbp-1D8h]
  __int128 v13; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 *v14; // [rsp+40h] [rbp-1B8h]
  __int128 v15; // [rsp+48h] [rbp-1B0h]
  __int64 v16; // [rsp+58h] [rbp-1A0h]
  int v17; // [rsp+60h] [rbp-198h] BYREF
  unsigned int v18; // [rsp+64h] [rbp-194h]
  __int64 v19; // [rsp+70h] [rbp-188h] BYREF
  __int128 v20; // [rsp+78h] [rbp-180h]
  __int64 v21; // [rsp+88h] [rbp-170h] BYREF
  __int128 v22; // [rsp+90h] [rbp-168h] BYREF
  __int128 *v23; // [rsp+A0h] [rbp-158h]
  __int64 v24; // [rsp+A8h] [rbp-150h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-148h]
  __int128 v26; // [rsp+C0h] [rbp-138h] BYREF
  __m256i v27; // [rsp+D0h] [rbp-128h] BYREF
  __m256i v28; // [rsp+F0h] [rbp-108h]
  __int128 v29; // [rsp+110h] [rbp-E8h]
  _OWORD v30[2]; // [rsp+120h] [rbp-D8h] BYREF
  __int128 v31; // [rsp+148h] [rbp-B0h] BYREF
  __m256i v32; // [rsp+158h] [rbp-A0h]
  __m256i v33; // [rsp+178h] [rbp-80h]
  __int128 v34; // [rsp+198h] [rbp-60h]
  __int128 v35; // [rsp+1A8h] [rbp-50h]
  __int128 v36; // [rsp+1B8h] [rbp-40h]

  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v10 = *(_BYTE *)(a1 + 30);
    v9 = *(_BYTE *)(a1 + 27);
    v8 = *(_BYTE *)(a1 + 28);
    v3 = 24 * result;
    while ( 1 )
    {
      v21 = v2;
      *(_QWORD *)&v31 = &v21;
      *((_QWORD *)&v31 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v26 = &off_F9090;
      *((_QWORD *)&v26 + 1) = 2LL;
      v27.m256i_i64[2] = (__int64)&unk_1A8A0;
      v27.m256i_i64[3] = 1LL;
      v27.m256i_i64[0] = (__int64)&v31;
      v27.m256i_i64[1] = 1LL;
      std::io::stdio::_print(&v26);
      <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(
        &v31,
        *(_QWORD *)(v21 + 8),
        *(_QWORD *)(v21 + 16));
      if ( (_QWORD)v31 != 0x8000000000000000LL )
        break;
      core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&v31);
      *(_QWORD *)&v26 = &off_F9080;
      *((_QWORD *)&v26 + 1) = 1LL;
      v27.m256i_i64[0] = 8LL;
      *(_OWORD *)&v27.m256i_u64[1] = 0LL;
      result = std::io::stdio::_print(&v26);
LABEL_4:
      v2 += 24LL;
      v3 -= 24LL;
      if ( !v3 )
        return result;
    }
    v30[1] = v36;
    v30[0] = v35;
    v29 = v34;
    v28 = v33;
    v27 = v32;
    v26 = v31;
    uu_pinky::platform::unix::gecos_to_fullname(&v13, &v26);
    if ( (_QWORD)v13 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v22 = 0LL;
      *((_QWORD *)&v22 + 1) = 1LL;
      v23 = 0LL;
      v4 = v28.m256i_i64[3];
      if ( v28.m256i_i64[3] != 0x8000000000000000LL )
      {
LABEL_8:
        v20 = v29;
LABEL_11:
        v19 = v4;
        v5 = v28.m256i_i64[0];
        if ( v28.m256i_i64[0] == 0x8000000000000000LL )
        {
          v25 = 1uLL;
          v5 = 0LL;
        }
        else
        {
          v25 = *(_OWORD *)&v28.m256i_u64[1];
        }
        v24 = v5;
        *(_QWORD *)&v11 = &v22;
        *((_QWORD *)&v11 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v13 = &off_F9020;
        *((_QWORD *)&v13 + 1) = 2LL;
        v14 = &v11;
        v15 = 1uLL;
        std::io::stdio::_print(&v13);
        if ( (v10 & 1) != 0 )
        {
          *(_QWORD *)&v11 = &v19;
          *((_QWORD *)&v11 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v13 = &off_F90B0;
          *((_QWORD *)&v13 + 1) = 1LL;
          *((_QWORD *)&v15 + 1) = &unk_1A8E0;
          v16 = 1LL;
          v14 = &v11;
          *(_QWORD *)&v15 = 1LL;
          std::io::stdio::_print(&v13);
          *(_QWORD *)&v11 = &v24;
          *((_QWORD *)&v11 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v13 = &off_F9040;
          *((_QWORD *)&v13 + 1) = 2LL;
          v14 = &v11;
          v15 = 1uLL;
          std::io::stdio::_print(&v13);
        }
        if ( (v9 & 1) != 0 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, v20, *((_QWORD *)&v20 + 1));
          v12 = v14;
          v11 = v13;
          std::path::PathBuf::push(&v11, aProject, 8LL);
          v14 = v12;
          v13 = v11;
          std::fs::File::open(&v17, &v13);
          if ( v17 == 1 )
          {
            core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v17);
          }
          else
          {
            v6 = v18;
            *(_QWORD *)&v13 = &off_F9060;
            *((_QWORD *)&v13 + 1) = 1LL;
            v14 = (_OWORD *)&byte_8;
            v15 = 0LL;
            std::io::stdio::_print(&v13);
            uu_pinky::platform::unix::read_to_console(v6);
          }
        }
        if ( (v8 & 1) != 0 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, v20, *((_QWORD *)&v20 + 1));
          v12 = v14;
          v11 = v13;
          std::path::PathBuf::push(&v11, aPlan_0, 5LL);
          v14 = v12;
          v13 = v11;
          std::fs::File::open(&v17, &v13);
          if ( v17 == 1 )
          {
            core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v17);
          }
          else
          {
            v7 = v18;
            *(_QWORD *)&v13 = &off_F9070;
            *((_QWORD *)&v13 + 1) = 1LL;
            v14 = (_OWORD *)&byte_8;
            v15 = 0LL;
            std::io::stdio::_print(&v13);
            uu_pinky::platform::unix::read_to_console(v7);
          }
        }
        *(_QWORD *)&v13 = &off_F8F70;
        *((_QWORD *)&v13 + 1) = 1LL;
        v14 = (_OWORD *)&byte_8;
        v15 = 0LL;
        std::io::stdio::_print(&v13);
        core::ptr::drop_in_place<alloc::string::String>(&v24);
        core::ptr::drop_in_place<alloc::string::String>(&v19);
        core::ptr::drop_in_place<alloc::string::String>(&v22);
        core::ptr::drop_in_place<alloc::string::String>(&v26);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v27.m256i_u64[1]);
        result = core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v30);
        goto LABEL_4;
      }
    }
    else
    {
      v23 = v14;
      v22 = v13;
      v4 = v28.m256i_i64[3];
      if ( v28.m256i_i64[3] != 0x8000000000000000LL )
        goto LABEL_8;
    }
    v20 = 1uLL;
    v4 = 0LL;
    goto LABEL_11;
  }
  return result;
}