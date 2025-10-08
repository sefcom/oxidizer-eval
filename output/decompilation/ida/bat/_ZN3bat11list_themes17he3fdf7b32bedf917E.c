__int64 __fastcall bat::list_themes(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int8 v12; // al
  __int8 v13; // al
  char v14; // al
  const char *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int128 *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r13
  char v23; // al
  __int64 v24; // rcx
  const char *v25; // rdx
  char v26; // al
  unsigned __int8 v27; // al
  __int8 v28; // al
  __int64 v29; // rax
  void *v30; // r15
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int128 v34; // xmm3
  __int128 v35; // xmm0
  __int8 v36; // al
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  _BYTE v45[65]; // [rsp+0h] [rbp-438h] BYREF
  __m256i src[5]; // [rsp+50h] [rbp-3E8h] BYREF
  __int128 v47; // [rsp+F0h] [rbp-348h] BYREF
  __int128 **v48; // [rsp+100h] [rbp-338h]
  __int64 (__fastcall *v49)(); // [rsp+108h] [rbp-330h]
  __int64 v50; // [rsp+110h] [rbp-328h]
  __int64 v51; // [rsp+120h] [rbp-318h] BYREF
  __int64 v52; // [rsp+128h] [rbp-310h]
  __int128 v53; // [rsp+130h] [rbp-308h] BYREF
  __int64 v54; // [rsp+140h] [rbp-2F8h]
  __int64 v55; // [rsp+148h] [rbp-2F0h]
  __int64 v56; // [rsp+150h] [rbp-2E8h]
  __int64 v57; // [rsp+158h] [rbp-2E0h]
  const char *v58; // [rsp+160h] [rbp-2D8h]
  _QWORD v59[2]; // [rsp+168h] [rbp-2D0h] BYREF
  __int128 *v60; // [rsp+178h] [rbp-2C0h] BYREF
  __int64 (__fastcall *v61)(); // [rsp+180h] [rbp-2B8h]
  _QWORD *v62; // [rsp+188h] [rbp-2B0h]
  __int64 (__fastcall *v63)(); // [rsp+190h] [rbp-2A8h]
  __int64 v64; // [rsp+198h] [rbp-2A0h] BYREF
  __int64 v65; // [rsp+1A0h] [rbp-298h]
  __int128 v66; // [rsp+1A8h] [rbp-290h]
  __int64 v67; // [rsp+1B8h] [rbp-280h]
  __int64 v68; // [rsp+1C0h] [rbp-278h]
  __int128 v69; // [rsp+1C8h] [rbp-270h]
  __int128 *v70; // [rsp+1D8h] [rbp-260h]
  __m256i v71; // [rsp+1E0h] [rbp-258h] BYREF
  __int128 v72; // [rsp+200h] [rbp-238h]
  _OWORD v73[3]; // [rsp+210h] [rbp-228h] BYREF
  __int64 v74; // [rsp+240h] [rbp-1F8h]
  __int64 v75; // [rsp+248h] [rbp-1F0h] BYREF
  __m256i v76; // [rsp+250h] [rbp-1E8h]
  __m256i v77; // [rsp+270h] [rbp-1C8h]
  __int128 v78; // [rsp+290h] [rbp-1A8h]
  __int128 v79; // [rsp+2A0h] [rbp-198h]
  __int128 v80; // [rsp+2B0h] [rbp-188h]
  __int128 v81; // [rsp+2C0h] [rbp-178h]
  __int64 v82; // [rsp+2D0h] [rbp-168h]
  __int64 dest; // [rsp+2D8h] [rbp-160h] BYREF
  __m256i v84[2]; // [rsp+2E0h] [rbp-158h] BYREF
  __int128 v85; // [rsp+320h] [rbp-118h]
  __int128 v86; // [rsp+330h] [rbp-108h]
  __int128 v87; // [rsp+340h] [rbp-F8h]
  __int128 v88; // [rsp+350h] [rbp-E8h]
  __int64 v89; // [rsp+360h] [rbp-D8h]
  __m256i v90; // [rsp+398h] [rbp-A0h]
  __int128 v91; // [rsp+3B8h] [rbp-80h]
  const char *v92; // [rsp+3C8h] [rbp-70h]
  __int64 v93; // [rsp+3D0h] [rbp-68h]
  __int64 v94; // [rsp+3E8h] [rbp-50h]
  __int64 v95; // [rsp+3F0h] [rbp-48h]
  char v96; // [rsp+3FBh] [rbp-3Dh]
  char v97; // [rsp+3FCh] [rbp-3Ch]
  unsigned __int8 v98; // [rsp+401h] [rbp-37h]
  unsigned __int8 v99; // [rsp+402h] [rbp-36h]

  bat::assets::assets_from_cache_or_binary((char *)&dest, *(_BYTE *)(a2 + 295), a5, a6);
  result = dest;
  src[0] = v84[0];
  src[1] = v84[1];
  *(_OWORD *)src[2].m256i_i8 = v85;
  if ( dest == 0x8000000000000001LL )
  {
    a1[4] = *(_OWORD *)src[2].m256i_i8;
    v9 = *(_OWORD *)src[0].m256i_i8;
    v10 = *(_OWORD *)&src[0].m256i_u64[2];
    v11 = *(_OWORD *)src[1].m256i_i8;
    a1[3] = *(_OWORD *)&src[1].m256i_u64[2];
    a1[2] = v11;
    a1[1] = v10;
    *a1 = v9;
    return result;
  }
  v82 = v89;
  v81 = v88;
  v80 = v87;
  v79 = v86;
  v76 = src[0];
  v77 = src[1];
  v78 = *(_OWORD *)src[2].m256i_i8;
  v75 = dest;
  <bat::config::Config as core::clone::Clone>::clone(&dest, a2);
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(src);
  v72 = *(_OWORD *)src[1].m256i_i8;
  v71 = src[0];
  hashbrown::map::HashMap<K,V,S,A>::insert(&v71, 11LL);
  v92 = aRust;
  v93 = 4LL;
  *(_OWORD *)src[1].m256i_i8 = v72;
  src[0] = v71;
  core::ptr::drop_in_place<bat::style::StyleComponents>(v90.m256i_i64[0], v90.m256i_i64[1]);
  v91 = *(_OWORD *)src[1].m256i_i8;
  v90 = src[0];
  bat::output::OutputType::from_mode(src, v99, v98, v94, v95);
  v12 = src[0].m256i_i8[0];
  if ( src[0].m256i_i8[0] == 13 )
  {
    *(_QWORD *)&v45[55] = src[1].m256i_i64[3];
    v73[0] = *(_OWORD *)&src[0].m256i_u64[1];
    v73[1] = *(_OWORD *)&src[0].m256i_u64[3];
    v73[2] = *(_OWORD *)&src[1].m256i_u64[1];
    v74 = src[1].m256i_i64[3];
    bat::output::OutputType::handle(src, v73);
    v13 = src[0].m256i_i8[0];
    if ( src[0].m256i_i8[0] != 13 )
    {
      v33 = *(_OWORD *)src[1].m256i_i8;
      v34 = *(_OWORD *)&src[1].m256i_u64[2];
      *(_OWORD *)&v45[15] = *(_OWORD *)&src[0].m256i_u64[2];
      *(_OWORD *)v45 = *(_OWORD *)&src[0].m256i_i8[1];
      a1[4] = *(_OWORD *)src[2].m256i_i8;
      a1[3] = v34;
      a1[2] = v33;
      a1[1] = *(_OWORD *)&v45[15];
      v35 = *(_OWORD *)v45;
LABEL_35:
      *(_OWORD *)((char *)a1 + 1) = v35;
      *(_BYTE *)a1 = v13;
      goto LABEL_36;
    }
    v53 = *(_OWORD *)&src[0].m256i_u64[1];
    v54 = src[0].m256i_i64[3];
    v14 = bat::theme::color_scheme(0LL);
    v55 = a3;
    v56 = a4;
    v15 = aMonokaiExtende;
    if ( (v14 & 1) != 0 )
      v15 = aMonokaiExtende_0;
    v58 = v15;
    v16 = 16LL;
    if ( (v14 & 1) != 0 )
      v16 = 22LL;
    v57 = v16;
    v17 = *((_QWORD *)&v80 + 1);
    v18 = 0LL;
    v19 = (__int128 *)v80;
    if ( (_QWORD)v80 )
      v19 = (__int128 *)v81;
    LOBYTE(v18) = (_QWORD)v80 != 0LL;
    v64 = v18;
    v65 = 0LL;
    v66 = v80;
    v67 = v18;
    v68 = 0LL;
    v69 = v80;
    v70 = v19;
    while ( 1 )
    {
      v20 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(
              &v64,
              v19,
              v18,
              v17);
      if ( !v20 )
        break;
      v21 = *(_QWORD *)(v20 + 8);
      v22 = *(_QWORD *)(v20 + 16);
      v51 = v21;
      v52 = v22;
      v23 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v58, v57, v21, v22);
      v24 = 10LL;
      v25 = aDefault_0;
      if ( !v23 )
      {
        v26 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(aMonokaiExtende, 16LL, v21, v22);
        v24 = 15LL;
        v25 = aDefaultDark;
        if ( !v26 )
        {
          v27 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(aMonokaiExtende_0, 22LL, v21, v22);
          v24 = 16 * (unsigned int)v27;
          v25 = (_BYTE *)(&dword_0 + 1);
          if ( v27 )
            v25 = (const char *)&unk_7F530;
        }
      }
      v59[0] = v25;
      v59[1] = v24;
      if ( v97 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v47, v21, v22);
        *(_QWORD *)&v45[16] = v48;
        *(_OWORD *)v45 = v47;
        v45[48] = 1;
        *(_QWORD *)&v45[49] = 0LL;
        *(_QWORD *)&v45[57] = 0x1500000015LL;
        *(_QWORD *)&v45[24] = 0x8000000000000002LL;
        v60 = (__int128 *)v45;
        v61 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
        v62 = v59;
        v63 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v47 = &off_6C8848;
        *((_QWORD *)&v47 + 1) = 3LL;
        v50 = 0LL;
        v48 = &v60;
        v49 = (__int64 (__fastcall *)())(&dword_0 + 2);
        bat::output::OutputHandle::write_fmt(src, &v53, &v47);
        v28 = src[0].m256i_i8[0];
        if ( src[0].m256i_i8[0] != 13 )
        {
          a1[4] = *(_OWORD *)src[2].m256i_i8;
          v39 = *(_OWORD *)&src[0].m256i_i8[1];
          v40 = *(_OWORD *)((char *)&src[0].m256i_u64[2] + 1);
          v41 = *(_OWORD *)&src[1].m256i_i8[1];
          *(_OWORD *)((char *)a1 + 49) = *(_OWORD *)((char *)&src[1].m256i_u64[2] + 1);
          *(_OWORD *)((char *)a1 + 33) = v41;
          *(_OWORD *)((char *)a1 + 17) = v40;
          *(_OWORD *)((char *)a1 + 1) = v39;
          *(_BYTE *)a1 = v28;
          core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v45);
          goto LABEL_36;
        }
        core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v45);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, v51, v52);
        *(_QWORD *)&v45[16] = src[0].m256i_i64[2];
        *(_OWORD *)v45 = *(_OWORD *)src[0].m256i_i8;
        core::ptr::drop_in_place<alloc::string::String>(&v84[0].m256i_u64[1]);
        v84[0].m256i_i64[3] = *(_QWORD *)&v45[16];
        *(_OWORD *)&v84[0].m256i_u64[1] = *(_OWORD *)v45;
        *(_QWORD *)&v47 = &dest;
        *((_QWORD *)&v47 + 1) = &v75;
        v29 = alloc::alloc::Global::alloc_impl(8LL, 160LL);
        if ( !v29 )
          alloc::alloc::handle_alloc_error(8LL, 160LL);
        v30 = (void *)v29;
        bat::theme_preview_file((__int64)src);
        memcpy(v30, src, 0xA0uLL);
        *(_QWORD *)v45 = 1LL;
        *(_QWORD *)&v45[8] = v30;
        *(_QWORD *)&v45[16] = 1LL;
        ((void (__fastcall *)(__m256i *, __int128 *, _BYTE *, __int128 *))bat::controller::Controller::run)(
          src,
          &v47,
          v45,
          &v53);
        if ( src[0].m256i_i8[0] != 13 )
          core::ptr::drop_in_place<core::result::Result<bat::assets::SyntaxReferenceInSet,bat::error::Error>>(src);
        *(_QWORD *)v45 = &off_6C8878;
        *(_QWORD *)&v45[8] = 1LL;
        *(_QWORD *)&v45[16] = 8LL;
        *(_OWORD *)&v45[24] = 0LL;
        v19 = &v53;
        bat::output::OutputHandle::write_fmt(src, &v53, v45);
      }
      else
      {
        *(_QWORD *)&v47 = &v51;
        *((_QWORD *)&v47 + 1) = <&T as core::fmt::Display>::fmt;
        if ( v96 )
        {
          *(_QWORD *)v45 = &unk_6C8198;
          *(_QWORD *)&v45[8] = 2LL;
          *(_QWORD *)&v45[32] = 0LL;
          *(_QWORD *)&v45[16] = &v47;
          *(_QWORD *)&v45[24] = 1LL;
        }
        else
        {
          v48 = (__int128 **)v59;
          v49 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)v45 = &unk_6C8888;
          *(_QWORD *)&v45[8] = 3LL;
          *(_QWORD *)&v45[32] = 0LL;
          *(_QWORD *)&v45[16] = &v47;
          *(_QWORD *)&v45[24] = 2LL;
        }
        v19 = &v53;
        bat::output::OutputHandle::write_fmt(src, &v53, v45);
      }
      v13 = src[0].m256i_i8[0];
      if ( src[0].m256i_i8[0] != 13 )
      {
        a1[4] = *(_OWORD *)src[2].m256i_i8;
        v35 = *(_OWORD *)&src[0].m256i_i8[1];
        v37 = *(_OWORD *)((char *)&src[0].m256i_u64[2] + 1);
        v38 = *(_OWORD *)&src[1].m256i_i8[1];
        *(_OWORD *)((char *)a1 + 49) = *(_OWORD *)((char *)&src[1].m256i_u64[2] + 1);
        *(_OWORD *)((char *)a1 + 33) = v38;
        *(_OWORD *)((char *)a1 + 17) = v37;
        goto LABEL_35;
      }
    }
    if ( !v97 )
    {
LABEL_33:
      *(_BYTE *)a1 = 13;
      core::ptr::drop_in_place<bat::output::OutputType>(v73);
      core::ptr::drop_in_place<bat::config::Config>(&dest);
      return core::ptr::drop_in_place<bat::assets::HighlightingAssets>(&v75);
    }
    std::path::Path::join(&v64, v55, v56, aThemes, 6LL);
    alloc::string::String::from_utf8_lossy(&v47, v65, v66);
    v60 = &v47;
    v61 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    *(_QWORD *)v45 = &off_6C88B8;
    *(_QWORD *)&v45[8] = 2LL;
    *(_QWORD *)&v45[32] = 0LL;
    *(_QWORD *)&v45[16] = &v60;
    *(_QWORD *)&v45[24] = 1LL;
    bat::output::OutputHandle::write_fmt(src, &v53, v45);
    v36 = src[0].m256i_i8[0];
    if ( src[0].m256i_i8[0] == 13 )
    {
      core::ptr::drop_in_place<regex::error::Error>(&v47);
      core::ptr::drop_in_place<std::path::PathBuf>(&v64);
      goto LABEL_33;
    }
    a1[4] = *(_OWORD *)src[2].m256i_i8;
    v42 = *(_OWORD *)&src[0].m256i_i8[1];
    v43 = *(_OWORD *)((char *)&src[0].m256i_u64[2] + 1);
    v44 = *(_OWORD *)&src[1].m256i_i8[1];
    *(_OWORD *)((char *)a1 + 49) = *(_OWORD *)((char *)&src[1].m256i_u64[2] + 1);
    *(_OWORD *)((char *)a1 + 33) = v44;
    *(_OWORD *)((char *)a1 + 17) = v43;
    *(_OWORD *)((char *)a1 + 1) = v42;
    *(_BYTE *)a1 = v36;
    core::ptr::drop_in_place<regex::error::Error>(&v47);
    core::ptr::drop_in_place<std::path::PathBuf>(&v64);
LABEL_36:
    core::ptr::drop_in_place<bat::output::OutputType>(v73);
  }
  else
  {
    *(_OWORD *)&v45[47] = *(_OWORD *)&src[1].m256i_u64[2];
    *(_OWORD *)&v45[32] = *(_OWORD *)&src[1].m256i_i8[1];
    *(_OWORD *)&v45[16] = *(_OWORD *)((char *)&src[0].m256i_u64[2] + 1);
    *(_OWORD *)v45 = *(_OWORD *)&src[0].m256i_i8[1];
    a1[4] = *(_OWORD *)src[2].m256i_i8;
    a1[3] = *(_OWORD *)&v45[47];
    v31 = *(_OWORD *)v45;
    v32 = *(_OWORD *)&v45[16];
    *(_OWORD *)((char *)a1 + 33) = *(_OWORD *)&v45[32];
    *(_OWORD *)((char *)a1 + 17) = v32;
    *(_OWORD *)((char *)a1 + 1) = v31;
    *(_BYTE *)a1 = v12;
  }
  core::ptr::drop_in_place<bat::config::Config>(&dest);
  return core::ptr::drop_in_place<bat::assets::HighlightingAssets>(&v75);
}