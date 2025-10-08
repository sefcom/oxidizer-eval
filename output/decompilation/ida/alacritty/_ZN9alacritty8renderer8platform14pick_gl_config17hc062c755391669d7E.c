unsigned __int64 __fastcall alacritty::renderer::platform::pick_gl_config(_QWORD *a1, __int64 a2, __int128 *a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // rcx
  char v10; // [rsp+2h] [rbp-466h] BYREF
  char v11; // [rsp+3h] [rbp-465h] BYREF
  char v12; // [rsp+4h] [rbp-464h] BYREF
  char v13; // [rsp+5h] [rbp-463h] BYREF
  char v14; // [rsp+6h] [rbp-462h] BYREF
  char v15; // [rsp+7h] [rbp-461h] BYREF
  __int64 v16; // [rsp+8h] [rbp-460h] BYREF
  __int64 v17; // [rsp+10h] [rbp-458h]
  int v18; // [rsp+1Ch] [rbp-44Ch] BYREF
  __int128 v19; // [rsp+20h] [rbp-448h] BYREF
  __int128 v20; // [rsp+30h] [rbp-438h]
  __int128 v21; // [rsp+40h] [rbp-428h]
  __int64 v22; // [rsp+50h] [rbp-418h]
  __int128 v23; // [rsp+58h] [rbp-410h]
  _QWORD *v24; // [rsp+68h] [rbp-400h]
  __int128 v25; // [rsp+70h] [rbp-3F8h]
  __int128 v26; // [rsp+80h] [rbp-3E8h]
  __int128 v27; // [rsp+90h] [rbp-3D8h]
  __int64 v28; // [rsp+A0h] [rbp-3C8h]
  __int128 v29; // [rsp+A8h] [rbp-3C0h]
  __int64 v30; // [rsp+B8h] [rbp-3B0h]
  _QWORD v31[2]; // [rsp+C0h] [rbp-3A8h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-398h] BYREF
  __int128 v33; // [rsp+E0h] [rbp-388h]
  __int128 v34; // [rsp+F0h] [rbp-378h]
  _BYTE v35[24]; // [rsp+100h] [rbp-368h]
  __int128 v36; // [rsp+120h] [rbp-348h] BYREF
  __int128 v37; // [rsp+130h] [rbp-338h]
  __int128 v38; // [rsp+140h] [rbp-328h]
  __int128 v39; // [rsp+150h] [rbp-318h]
  char *v40; // [rsp+160h] [rbp-308h]
  __int64 (__fastcall *v41)(); // [rsp+168h] [rbp-300h]
  char *v42; // [rsp+170h] [rbp-2F8h]
  __int64 (__fastcall *v43)(); // [rsp+178h] [rbp-2F0h]
  char *v44; // [rsp+180h] [rbp-2E8h]
  __int64 (__fastcall *v45)(); // [rsp+188h] [rbp-2E0h]
  char **v46; // [rsp+190h] [rbp-2D8h] BYREF
  __int64 v47; // [rsp+198h] [rbp-2D0h]
  __int128 *v48; // [rsp+1A0h] [rbp-2C8h]
  __int64 v49; // [rsp+1A8h] [rbp-2C0h]
  __int64 v50; // [rsp+1B0h] [rbp-2B8h]
  _QWORD v51[5]; // [rsp+1D0h] [rbp-298h] BYREF
  _OWORD v52[4]; // [rsp+1F8h] [rbp-270h] BYREF
  char *v53; // [rsp+238h] [rbp-230h]
  __int128 v54; // [rsp+240h] [rbp-228h] BYREF
  _BYTE dest[200]; // [rsp+250h] [rbp-218h] BYREF
  char v56; // [rsp+318h] [rbp-150h]
  _BYTE v57[15]; // [rsp+319h] [rbp-14Fh]
  __int128 v58; // [rsp+328h] [rbp-140h]
  __int128 v59; // [rsp+338h] [rbp-130h]
  __int128 v60; // [rsp+348h] [rbp-120h]
  __int64 v61; // [rsp+358h] [rbp-110h]
  char v62; // [rsp+360h] [rbp-108h]
  _BYTE v63[15]; // [rsp+361h] [rbp-107h]
  _OWORD src[15]; // [rsp+370h] [rbp-F8h] BYREF

  v30 = a2;
  v24 = a1;
  LODWORD(v19) = 0;
  DWORD2(v19) = 0;
  LODWORD(v20) = 16;
  WORD4(v21) = 0;
  WORD6(v21) = 0;
  LODWORD(v22) = 134744064;
  BYTE4(v22) = 0;
  BYTE6(v22) = 0;
  *(_QWORD *)&v23 = 0x80202000001LL;
  *((_QWORD *)&v23 + 1) = 1LL;
  if ( *(_DWORD *)a3 != 16 )
  {
    v28 = v22;
    v29 = v23;
    v27 = v21;
    v26 = v20;
    v25 = v19;
    *(_QWORD *)&v27 = *((_QWORD *)a3 + 2);
    v26 = *a3;
    v20 = v26;
    *(_QWORD *)&v21 = v27;
  }
  <glutin::config::ConfigTemplate as core::clone::Clone>::clone(&v54, &v19);
  v34 = *(_OWORD *)&dest[16];
  v33 = *(_OWORD *)dest;
  v32 = v54;
  *(_QWORD *)&v35[4] = *(_QWORD *)&dest[36];
  v35[12] = dest[44];
  *(_QWORD *)&v35[14] = *(_QWORD *)&dest[46];
  *(_WORD *)&v35[22] = *(_WORD *)&dest[54];
  *(_DWORD *)v35 = 168430080;
  v35[13] = 2;
  <glutin::config::ConfigTemplate as core::clone::Clone>::clone(src, &v19);
  <glutin::config::ConfigTemplate as core::clone::Clone>::clone((char *)&src[4] + 8, &v32);
  *(_QWORD *)&src[12] = v22;
  src[11] = v21;
  src[10] = v20;
  src[9] = v19;
  *(_QWORD *)&v57[7] = *((_QWORD *)&v23 + 1);
  *(_QWORD *)v57 = *(_QWORD *)((char *)&v23 + 1);
  v58 = v32;
  v59 = v33;
  v60 = v34;
  v61 = *(_QWORD *)v35;
  *(_QWORD *)v63 = *(_QWORD *)&v35[9];
  *(_QWORD *)&v63[7] = *(_QWORD *)&v35[16];
  *(_QWORD *)&v54 = 0LL;
  *((_QWORD *)&v54 + 1) = 4LL;
  memcpy(dest, src, sizeof(dest));
  v56 = 0;
  v62 = 0;
  core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v52, &v54);
  if ( LODWORD(v52[0]) == 2 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v24, aFailedToFindSu);
  while ( 1 )
  {
    v40 = v53;
    v39 = v52[3];
    v38 = v52[2];
    v37 = v52[1];
    v36 = v52[0];
    <glutin::display::Display as glutin::display::GlDisplay>::find_configs(&v46, v30, &v36);
    if ( (_DWORD)v46 == 2 )
      break;
    core::ptr::drop_in_place<core::result::Result<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = glutin::config::Config>,glutin::error::Error>>(&v46);
    v31[0] = 2LL;
LABEL_7:
    core::ptr::drop_in_place<core::option::Option<glutin::config::Config>>(v31);
    core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v52, &v54);
    if ( LODWORD(v52[0]) == 2 )
      return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v24, aFailedToFindSu);
  }
  v4 = alacritty::renderer::platform::pick_gl_config::{{closure}}(v47, v48);
  v31[0] = v4;
  v31[1] = v5;
  if ( v4 == 2 )
    goto LABEL_7;
  v6 = v4;
  v7 = v5;
  v16 = v4;
  v17 = v5;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
  {
    v18 = <glutin::config::Config as glutin::config::GlConfig>::color_buffer_type(&v16);
    v10 = <glutin::config::Config as glutin::config::GlConfig>::alpha_size(&v16);
    v11 = <glutin::config::Config as glutin::config::GlConfig>::num_samples(&v16);
    v12 = <glutin::config::Config as glutin::config::GlConfig>::hardware_accelerated(&v16);
    v13 = <glutin::config::Config as glutin::config::GlConfig>::supports_transparency(&v16);
    v14 = <glutin::config::Config as glutin::config::GlConfig>::api(&v16);
    v15 = <glutin::config::Config as glutin::config::GlConfig>::srgb_capable(&v16);
    *(_QWORD *)&v36 = &v18;
    *((_QWORD *)&v36 + 1) = <core::option::Option<T> as core::fmt::Debug>::fmt;
    *(_QWORD *)&v37 = &v10;
    *((_QWORD *)&v37 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    *(_QWORD *)&v38 = &v11;
    *((_QWORD *)&v38 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    *(_QWORD *)&v39 = &v12;
    *((_QWORD *)&v39 + 1) = <bool as core::fmt::Debug>::fmt;
    v40 = &v13;
    v41 = <core::option::Option<T> as core::fmt::Debug>::fmt;
    v42 = &v14;
    v43 = <glutin::config::Api as core::fmt::Debug>::fmt;
    v44 = &v15;
    v45 = <bool as core::fmt::Display>::fmt;
    v46 = &off_883880;
    v47 = 7LL;
    v50 = 0LL;
    v48 = &v36;
    v49 = 7LL;
    v8 = log::__private_api::loc(&off_8838F0);
    v51[0] = aAlacrittyRende_1;
    v51[1] = 29LL;
    v51[2] = aAlacrittyRende_1;
    v51[3] = 29LL;
    v51[4] = v8;
    log::__private_api::log(&v46, 4LL, v51);
    v6 = v16;
    v7 = v17;
  }
  v9 = v24;
  v24[1] = v6;
  v9[2] = v7;
  result = 0x8000000000000000LL;
  *v9 = 0x8000000000000000LL;
  return result;
}