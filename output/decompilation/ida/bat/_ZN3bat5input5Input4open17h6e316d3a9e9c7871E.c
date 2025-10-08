__int64 __fastcall bat::input::Input::open(char *dest, __int128 *a2, __int64 a3)
{
  __int64 v5; // rbx
  signed __int64 v6; // rcx
  signed __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int32 v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // rsi
  __int128 v24; // kr00_16
  __int128 v25; // xmm0
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int32 v30; // eax
  unsigned __int32 v31; // [rsp+Ch] [rbp-3BCh] BYREF
  __int128 v32; // [rsp+10h] [rbp-3B8h] BYREF
  __int64 v33; // [rsp+20h] [rbp-3A8h]
  __m256i v34; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v35[29]; // [rsp+50h] [rbp-378h] BYREF
  __m256i v36; // [rsp+70h] [rbp-358h] BYREF
  __int128 v37; // [rsp+90h] [rbp-338h]
  __m256i v38; // [rsp+A0h] [rbp-328h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-308h]
  int v40; // [rsp+D8h] [rbp-2F0h]
  _BYTE v41[29]; // [rsp+150h] [rbp-278h] BYREF
  _BYTE src[208]; // [rsp+170h] [rbp-258h] BYREF
  __m256i v43; // [rsp+240h] [rbp-188h] BYREF
  __int128 v44; // [rsp+260h] [rbp-168h]
  __int128 v45; // [rsp+270h] [rbp-158h]
  __int128 v46; // [rsp+280h] [rbp-148h]
  __int128 v47; // [rsp+290h] [rbp-138h]
  __int128 v48; // [rsp+2A0h] [rbp-128h] BYREF
  __int128 v49; // [rsp+2B0h] [rbp-118h]
  __int64 v50; // [rsp+2C0h] [rbp-108h]
  __m256i v51; // [rsp+2D0h] [rbp-F8h] BYREF
  __int128 v52; // [rsp+2F0h] [rbp-D8h]
  __int128 v53; // [rsp+300h] [rbp-C8h]
  __int128 v54; // [rsp+310h] [rbp-B8h]
  __int128 v55; // [rsp+320h] [rbp-A8h]
  __int128 v56; // [rsp+330h] [rbp-98h] BYREF
  __int64 v57; // [rsp+340h] [rbp-88h]
  __int128 v58; // [rsp+350h] [rbp-78h] BYREF
  __int64 v59; // [rsp+360h] [rbp-68h]
  __int128 v60; // [rsp+368h] [rbp-60h] BYREF
  __int64 v61; // [rsp+378h] [rbp-50h]
  __int128 v62; // [rsp+380h] [rbp-48h] BYREF
  __int64 v63; // [rsp+390h] [rbp-38h]

  v5 = (__int64)a2 + 40;
  <bat::input::InputDescription as core::clone::Clone>::clone(&v43, (char *)a2 + 40);
  v6 = *((_QWORD *)a2 + 17);
  v7 = 0LL;
  if ( v6 < (__int64)0x8000000000000002LL )
    v7 = v6 - 0x7FFFFFFFFFFFFFFFLL;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      if ( a3 )
      {
        <clircle::Identifier as core::convert::TryFrom<clircle::Stdio>>::try_from(src, 0LL);
        if ( src[29] == 2 )
        {
          bat::input::Input::open::{{closure}}(&v48, *(_QWORD *)src);
          *(_OWORD *)v36.m256i_i8 = v48;
          v36.m256i_i64[2] = v49;
          *(_QWORD *)&src[23] = v49;
          *(_OWORD *)&src[7] = v48;
          dest[8] = 11;
          v8 = *(_QWORD *)&src[15];
          v9 = *(_QWORD *)&src[23];
          *(_OWORD *)(dest + 9) = *(_OWORD *)src;
          *((_QWORD *)dest + 3) = v8;
          *((_QWORD *)dest + 4) = v9;
          *(_QWORD *)dest = 2LL;
LABEL_23:
          core::ptr::drop_in_place<bat::input::InputDescription>(&v43);
          core::ptr::drop_in_place<bat::input::InputMetadata>(a2);
          return core::ptr::drop_in_place<bat::input::InputDescription>(v5);
        }
        *(_OWORD *)((char *)&v51.m256i_u64[1] + 5) = *(_OWORD *)&src[13];
        *(_OWORD *)v51.m256i_i8 = *(_OWORD *)src;
        *(_OWORD *)v36.m256i_i8 = *(_OWORD *)src;
        *(_OWORD *)((char *)&v36.m256i_u64[1] + 5) = *(_OWORD *)((char *)&v51.m256i_u64[1] + 5);
        *(_OWORD *)v38.m256i_i8 = *(_OWORD *)v36.m256i_i8;
        *(_OWORD *)((char *)&v38.m256i_u64[1] + 5) = *(_OWORD *)((char *)&v51.m256i_u64[1] + 5);
        v38.m256i_i8[29] = src[29];
        v38.m256i_i16[15] = *(_WORD *)&src[30];
        if ( (unsigned __int8)<clircle::Identifier as clircle::Clircle>::surely_conflicts_with(a3, &v38) )
        {
          <bat::error::Error as core::convert::From<&str>>::from(src, aIoCircleDetect, 92LL);
          *(_OWORD *)(dest + 72) = *(_OWORD *)&src[64];
          v20 = *(_OWORD *)src;
          v21 = *(_OWORD *)&src[16];
          v22 = *(_OWORD *)&src[32];
          *(_OWORD *)(dest + 56) = *(_OWORD *)&src[48];
          *(_OWORD *)(dest + 40) = v22;
          *(_OWORD *)(dest + 24) = v21;
          *(_OWORD *)(dest + 8) = v20;
          *(_QWORD *)dest = 2LL;
          core::ptr::drop_in_place<clircle::Identifier>(&v38);
          goto LABEL_23;
        }
        core::ptr::drop_in_place<clircle::Identifier>(&v38);
      }
      v36.m256i_i64[0] = 0x8000000000000000LL;
      *(_QWORD *)&v52 = *((_QWORD *)a2 + 4);
      v25 = *a2;
      *(_OWORD *)&v51.m256i_u64[2] = a2[1];
      *(_OWORD *)v51.m256i_i8 = v25;
      bat::input::InputReader::new(&v38);
      *(_QWORD *)&src[200] = v36.m256i_i64[2];
      *(_OWORD *)&src[184] = *(_OWORD *)v36.m256i_i8;
    }
    else
    {
      v13 = *((_QWORD *)a2 + 18);
      v14 = *((_QWORD *)a2 + 19);
      v36.m256i_i64[0] = 0x8000000000000001LL;
      *(_QWORD *)&v52 = *((_QWORD *)a2 + 4);
      v15 = *a2;
      *(_OWORD *)&v51.m256i_u64[2] = a2[1];
      *(_OWORD *)v51.m256i_i8 = v15;
      std::io::buffered::bufreader::BufReader<R>::with_capacity(src, v13, v14);
      bat::input::InputReader::new(&v38, src);
      *(_OWORD *)&src[184] = *(_OWORD *)v36.m256i_i8;
      *(_QWORD *)&src[200] = v36.m256i_i64[2];
    }
    *(__m256i *)src = v51;
    *(_QWORD *)&src[32] = v52;
    *(__m256i *)&src[40] = v38;
    *(_OWORD *)&src[72] = v39;
    *(_OWORD *)&src[168] = v47;
    *(_OWORD *)&src[152] = v46;
    *(_OWORD *)&src[136] = v45;
    *(_OWORD *)&src[120] = v44;
    *(__m256i *)&src[88] = v43;
    memcpy(dest, src, 0xD0uLL);
    return core::ptr::drop_in_place<bat::input::InputDescription>(v5);
  }
  v33 = *((_QWORD *)a2 + 19);
  v32 = *(__int128 *)((char *)a2 + 136);
  <&str as alloc::string::SpecToString>::spec_to_string(&v38, *((_QWORD *)&v32 + 1), v33);
  v57 = v38.m256i_i64[2];
  v56 = *(_OWORD *)v38.m256i_i8;
  v55 = v47;
  v54 = v46;
  v53 = v45;
  v52 = v44;
  v51 = v43;
  v50 = *((_QWORD *)a2 + 4);
  v10 = *a2;
  v49 = a2[1];
  v48 = v10;
  std::fs::File::open(&v34, &v32);
  if ( v34.m256i_i32[0] != 1 )
  {
    v12 = v34.m256i_i32[1];
LABEL_14:
    v31 = v12;
    std::fs::File::metadata(&v38, &v31);
    if ( v38.m256i_i32[0] == 2 )
    {
      v16 = v38.m256i_i64[1];
      dest[8] = 0;
      *((_QWORD *)dest + 2) = v16;
    }
    else
    {
      if ( (v40 & 0xF000) != 0x4000 )
      {
        v23 = v31;
        if ( a3 )
        {
          <clircle::Identifier as core::convert::TryFrom<std::fs::File>>::try_from(&v38, v31);
          if ( v38.m256i_i8[29] == 2 )
          {
            bat::input::Input::open::{{closure}}(&v62, *((_QWORD *)&v32 + 1), v33, v38.m256i_i64[0]);
            *(_OWORD *)v41 = v62;
            *(_QWORD *)&v41[16] = v63;
            *(__int64 *)((char *)&v38.m256i_i64[2] + 7) = v63;
            *(_OWORD *)((char *)&v38.m256i_u32[1] + 3) = v62;
            dest[8] = 11;
            v24 = *(_OWORD *)((char *)&v38.m256i_u64[1] + 7);
            *(_OWORD *)(dest + 9) = *(_OWORD *)v38.m256i_i8;
            *(_OWORD *)(dest + 24) = v24;
            goto LABEL_11;
          }
          *(_OWORD *)&v35[13] = *(_OWORD *)((char *)&v38.m256i_u64[1] + 5);
          *(_OWORD *)v35 = *(_OWORD *)v38.m256i_i8;
          *(_OWORD *)v41 = *(_OWORD *)v38.m256i_i8;
          *(_OWORD *)&v41[13] = *(_OWORD *)&v35[13];
          *(_OWORD *)v34.m256i_i8 = *(_OWORD *)v41;
          *(_OWORD *)((char *)&v34.m256i_u64[1] + 5) = *(_OWORD *)&v35[13];
          v34.m256i_i8[29] = v38.m256i_i8[29];
          v34.m256i_i16[15] = v38.m256i_i16[15];
          if ( (unsigned __int8)<clircle::Identifier as clircle::Clircle>::surely_conflicts_with(a3, &v34) )
          {
            alloc::string::String::from_utf8_lossy(v35, *((_QWORD *)&v32 + 1), v33);
            *(_QWORD *)v41 = v35;
            *(_QWORD *)&v41[8] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
            v38.m256i_i64[0] = (__int64)&off_6CE4A8;
            v38.m256i_i64[1] = 2LL;
            *(_QWORD *)&v39 = 0LL;
            v38.m256i_i64[2] = (__int64)v41;
            v38.m256i_i64[3] = 1LL;
            core::option::Option<T>::map_or_else(&v60, 0LL, v27, &v38);
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(v35);
            *(_OWORD *)((char *)&v38.m256i_u32[1] + 3) = v60;
            *(__int64 *)((char *)&v38.m256i_i64[2] + 7) = v61;
            dest[8] = 11;
            v28 = *(__int64 *)((char *)&v38.m256i_i64[1] + 7);
            v29 = *(__int64 *)((char *)&v38.m256i_i64[2] + 7);
            *(_OWORD *)(dest + 9) = *(_OWORD *)v38.m256i_i8;
            *((_QWORD *)dest + 3) = v28;
            *((_QWORD *)dest + 4) = v29;
            *(_QWORD *)dest = 2LL;
            core::ptr::drop_in_place<clircle::Identifier>(&v34);
            goto LABEL_19;
          }
          v38 = v34;
          v30 = <clircle::Identifier as clircle::Clircle>::into_inner(&v38);
          v23 = v30;
          if ( v30 == -1 )
            core::option::expect_failed(aTheFileWasLost, 78LL, &off_6CE4C8);
          v31 = v30;
        }
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v38, v23);
        bat::input::InputReader::new(&v36, &v38);
        *(_OWORD *)&src[184] = v56;
        *(_QWORD *)&src[200] = v57;
        *(_OWORD *)src = v48;
        *(_OWORD *)&src[16] = v49;
        *(_QWORD *)&src[32] = v50;
        *(__m256i *)&src[40] = v36;
        *(_OWORD *)&src[72] = v37;
        *(_OWORD *)&src[168] = v47;
        *(_OWORD *)&src[152] = v46;
        *(_OWORD *)&src[136] = v45;
        *(_OWORD *)&src[120] = v44;
        *(__m256i *)&src[88] = v43;
        memcpy(dest, src, 0xD0uLL);
        goto LABEL_20;
      }
      alloc::string::String::from_utf8_lossy(&v34, *((_QWORD *)&v32 + 1), v33);
      *(_QWORD *)v35 = &v34;
      *(_QWORD *)&v35[8] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      v38.m256i_i64[0] = (__int64)&off_6CE488;
      v38.m256i_i64[1] = 2LL;
      *(_QWORD *)&v39 = 0LL;
      v38.m256i_i64[2] = (__int64)v35;
      v38.m256i_i64[3] = 1LL;
      core::option::Option<T>::map_or_else(&v58, 0LL, v17, &v38);
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v34);
      *(_OWORD *)((char *)&v38.m256i_u32[1] + 3) = v58;
      *(__int64 *)((char *)&v38.m256i_i64[2] + 7) = v59;
      dest[8] = 11;
      v18 = *(__int64 *)((char *)&v38.m256i_i64[1] + 7);
      v19 = *(__int64 *)((char *)&v38.m256i_i64[2] + 7);
      *(_OWORD *)(dest + 9) = *(_OWORD *)v38.m256i_i8;
      *((_QWORD *)dest + 3) = v18;
      *((_QWORD *)dest + 4) = v19;
    }
    *(_QWORD *)dest = 2LL;
    core::ptr::drop_in_place<std::fs::File>(&v31);
    goto LABEL_19;
  }
  bat::input::Input::open::{{closure}}(&v38, *((_QWORD *)&v32 + 1), v33, v34.m256i_i64[1]);
  v11 = v38.m256i_i64[0];
  v12 = v38.m256i_i32[2];
  *(_QWORD *)v35 = *(__int64 *)((char *)&v38.m256i_i64[1] + 4);
  *(_DWORD *)&v35[8] = v38.m256i_i32[5];
  if ( v38.m256i_i64[0] == 0x8000000000000000LL )
    goto LABEL_14;
  *((_DWORD *)dest + 9) = *(_DWORD *)&v35[8];
  *(_QWORD *)(dest + 28) = *(_QWORD *)v35;
  dest[8] = 11;
  *((_QWORD *)dest + 2) = v11;
  *((_DWORD *)dest + 6) = v12;
LABEL_11:
  *(_QWORD *)dest = 2LL;
LABEL_19:
  core::ptr::drop_in_place<bat::input::InputMetadata>(&v48);
  core::ptr::drop_in_place<bat::input::InputDescription>(&v51);
  core::ptr::drop_in_place<bat::input::OpenedInputKind>(&v56);
LABEL_20:
  core::ptr::drop_in_place<std::path::PathBuf>(&v32);
  return core::ptr::drop_in_place<bat::input::InputDescription>(v5);
}