__int64 __fastcall forc_fmt::format_file(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // r13
  __int64 v11; // r15
  unsigned __int8 v12; // al
  char *v13; // r12
  __int64 v14; // rax
  unsigned __int8 v15; // al
  char *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // r15
  __int128 v23; // xmm0
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // r13
  char *v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // al
  char v34; // bp
  void *v35; // r12
  __int128 v36; // xmm0
  __int64 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rbp
  char *v40; // r15
  __int64 v41; // rax
  __int64 v42; // r9
  unsigned __int128 v43; // [rsp+0h] [rbp-208h] BYREF
  __int128 v44; // [rsp+10h] [rbp-1F8h]
  __int64 v45; // [rsp+20h] [rbp-1E8h]
  __int128 v46; // [rsp+30h] [rbp-1D8h] BYREF
  __int128 v47; // [rsp+40h] [rbp-1C8h]
  __int64 v48; // [rsp+50h] [rbp-1B8h]
  __int64 v49; // [rsp+58h] [rbp-1B0h]
  __int128 v50; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v51; // [rsp+70h] [rbp-198h]
  unsigned __int128 *v52; // [rsp+78h] [rbp-190h] BYREF
  unsigned __int128 *v53; // [rsp+80h] [rbp-188h]
  void *v54; // [rsp+88h] [rbp-180h]
  _BYTE v55[24]; // [rsp+90h] [rbp-178h] BYREF
  unsigned __int128 **v56; // [rsp+A8h] [rbp-160h] BYREF
  __int64 (__fastcall *v57)(); // [rsp+B0h] [rbp-158h]
  char *v58; // [rsp+B8h] [rbp-150h]
  unsigned __int128 v59; // [rsp+C0h] [rbp-148h] BYREF
  __int128 v60; // [rsp+D0h] [rbp-138h]
  __int64 v61; // [rsp+E0h] [rbp-128h]
  __int128 v62; // [rsp+E8h] [rbp-120h] BYREF
  __int64 v63; // [rsp+F8h] [rbp-110h]
  __int128 *v64; // [rsp+100h] [rbp-108h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+108h] [rbp-100h]
  __int128 v66; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v67; // [rsp+120h] [rbp-E8h]
  _BYTE v68[24]; // [rsp+128h] [rbp-E0h] BYREF
  _BYTE v69[24]; // [rsp+140h] [rbp-C8h] BYREF
  int v70; // [rsp+158h] [rbp-B0h] BYREF
  __int128 v71; // [rsp+160h] [rbp-A8h]
  __int64 v72; // [rsp+170h] [rbp-98h]
  _BYTE v73[24]; // [rsp+178h] [rbp-90h] BYREF
  _BYTE v74[24]; // [rsp+190h] [rbp-78h] BYREF
  _BYTE v75[24]; // [rsp+1A8h] [rbp-60h] BYREF
  _BYTE v76[72]; // [rsp+1C0h] [rbp-48h] BYREF

  std::fs::canonicalize(&v43, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16));
  if ( !__OFSUB__(-(__int64)v43, 1LL) )
  {
    *(_OWORD *)v55 = v43;
    *(_QWORD *)&v55[16] = v44;
    if ( (unsigned __int8)forc_util::fs_locking::is_file_dirty(v55) )
    {
      v46 = *(_OWORD *)&v55[8];
      *(_QWORD *)&v59 = &v46;
      *((_QWORD *)&v59 + 1) = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)&v43 = &off_80A320;
      *((_QWORD *)&v43 + 1) = 1LL;
      v45 = 0LL;
      *(_QWORD *)&v44 = &v59;
      *((_QWORD *)&v44 + 1) = 1LL;
      core::option::Option<T>::map_or_else(v73, 0LL, v6, &v43);
      v7 = anyhow::error::<impl anyhow::Error>::msg(v73);
LABEL_7:
      *(_QWORD *)(a1 + 8) = v7;
      *(_BYTE *)a1 = 1;
LABEL_8:
      core::ptr::drop_in_place<std::path::PathBuf>(v55);
      return core::ptr::drop_in_place<std::path::PathBuf>(a3);
    }
    std::fs::read_to_string(&v62, v55);
    if ( (_QWORD)v62 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v62);
      *(_QWORD *)&v46 = v55;
      *((_QWORD *)&v46 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
      *(_QWORD *)&v43 = &off_80A380;
      *((_QWORD *)&v43 + 1) = 1LL;
      v45 = 0LL;
      *(_QWORD *)&v44 = &v46;
      *((_QWORD *)&v44 + 1) = 1LL;
      core::option::Option<T>::map_or_else(v76, 0LL, v8, &v43);
      v7 = anyhow::error::<impl anyhow::Error>::msg(v76);
      goto LABEL_7;
    }
    v10 = v63;
    v67 = v63;
    v66 = v62;
    v11 = *((_QWORD *)&v62 + 1);
    <sway_types::span::Source as core::convert::From<&str>>::from(&v43, *((_QWORD *)&v62 + 1), v63);
    swayfmt::formatter::Formatter::format(&v70, a4, &v43);
    if ( v70 == 1 )
    {
      v51 = v72;
      v50 = v71;
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL) <= 1
        && (v12 = tracing_core::callsite::DefaultCallsite::interest(&forc_fmt::format_file::__CALLSITE)) != 0
        && (unsigned __int8)tracing::__macro_support::__is_enabled(forc_fmt::format_file::__CALLSITE, v12) )
      {
        v13 = (char *)forc_fmt::format_file::__CALLSITE;
        v14 = *((_QWORD *)forc_fmt::format_file::__CALLSITE + 7);
        v46 = *((_OWORD *)forc_fmt::format_file::__CALLSITE + 3);
        v47 = *((_OWORD *)forc_fmt::format_file::__CALLSITE + 4);
        v48 = 0LL;
        v49 = v14;
        <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v43, &v46);
        if ( (_QWORD)v43 )
        {
          v61 = v45;
          v60 = v44;
          v59 = v43;
          v56 = (unsigned __int128 **)&v50;
          v57 = <swayfmt::error::FormatterError as core::fmt::Display>::fmt;
          *(_QWORD *)&v43 = &unk_166A30;
          *((_QWORD *)&v43 + 1) = 1LL;
          v45 = 0LL;
          *(_QWORD *)&v44 = &v56;
          *((_QWORD *)&v44 + 1) = 1LL;
          v52 = &v59;
          v53 = &v43;
          v54 = &unk_80A3A8;
          *(_QWORD *)&v46 = &v52;
          *((_QWORD *)&v46 + 1) = 1LL;
          *(_QWORD *)&v47 = v13 + 48;
          forc_fmt::format_file::{{closure}}(&v46);
          goto LABEL_28;
        }
      }
      else
      {
        if ( (unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS)
          || (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) < 4
          || (v22 = forc_fmt::format_file::__CALLSITE,
              v23 = *((_OWORD *)forc_fmt::format_file::__CALLSITE + 2),
              *(_QWORD *)v69 = 4LL,
              *(_OWORD *)&v69[8] = v23,
              v24 = log::logger(),
              v26 = v25,
              !(*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v25 + 24))(v24, v69)) )
        {
LABEL_28:
          core::str::converts::from_utf8(&v43, *(_QWORD *)&v55[8], *(_QWORD *)&v55[16]);
          if ( (v43 & 1) != 0 )
          {
            *(_QWORD *)&v46 = &v50;
            *((_QWORD *)&v46 + 1) = <swayfmt::error::FormatterError as core::fmt::Display>::fmt;
            *(_QWORD *)&v43 = &off_80A370;
            *((_QWORD *)&v43 + 1) = 1LL;
            v45 = 0LL;
            *(_QWORD *)&v44 = &v46;
            *((_QWORD *)&v44 + 1) = 1LL;
            core::option::Option<T>::map_or_else(v75, 0LL, v30, &v43);
            v31 = anyhow::error::<impl anyhow::Error>::msg(v75);
          }
          else
          {
            v59 = __PAIR128__(v44, *((unsigned __int64 *)&v43 + 1));
            *(_QWORD *)&v46 = &v59;
            *((_QWORD *)&v46 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v47 = &v50;
            *((_QWORD *)&v47 + 1) = <swayfmt::error::FormatterError as core::fmt::Display>::fmt;
            *(_QWORD *)&v43 = &off_80A350;
            *((_QWORD *)&v43 + 1) = 2LL;
            v45 = 0LL;
            *(_QWORD *)&v44 = &v46;
            *((_QWORD *)&v44 + 1) = 2LL;
            core::option::Option<T>::map_or_else(v74, 0LL, v30, &v43);
            v31 = anyhow::error::<impl anyhow::Error>::msg(v74);
          }
          *(_QWORD *)(a1 + 8) = v31;
          *(_BYTE *)a1 = 1;
          core::ptr::drop_in_place<swayfmt::error::FormatterError>(&v50);
          goto LABEL_43;
        }
        v27 = (char *)forc_fmt::format_file::__CALLSITE;
        v28 = *((_QWORD *)forc_fmt::format_file::__CALLSITE + 7);
        v46 = *((_OWORD *)forc_fmt::format_file::__CALLSITE + 3);
        v47 = *((_OWORD *)forc_fmt::format_file::__CALLSITE + 4);
        v48 = 0LL;
        v49 = v28;
        <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v43, &v46);
        if ( (_QWORD)v43 )
        {
          v61 = v45;
          v60 = v44;
          v59 = v43;
          v64 = &v50;
          v65 = <swayfmt::error::FormatterError as core::fmt::Display>::fmt;
          v52 = &v59;
          v53 = &v43;
          v54 = &unk_80A3A8;
          v56 = &v52;
          v57 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v58 = v27 + 48;
          *(_QWORD *)&v47 = *(_QWORD *)&v69[16];
          v46 = *(_OWORD *)v69;
          tracing::__macro_support::__tracing_log(v22, v24, v26, &v46, &v56, v29, &unk_166A30, 1LL, &v64, 1LL, 0LL);
          goto LABEL_28;
        }
      }
      core::option::expect_failed(aFieldsetCorrup, 34LL, &off_80A3C8);
    }
    v51 = v72;
    v50 = v71;
    if ( (a2 & 1) != 0 )
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v10, *((_QWORD *)&v50 + 1), v51) )
      {
        if ( (unsigned __int64)core::sync::atomic::atomic_load(&tracing_core::metadata::MAX_LEVEL) <= 2
          && (v15 = tracing_core::callsite::DefaultCallsite::interest(&forc_fmt::format_file::__CALLSITE)) != 0
          && (unsigned __int8)tracing::__macro_support::__is_enabled(forc_fmt::format_file::__CALLSITE, v15) )
        {
          v16 = (char *)forc_fmt::format_file::__CALLSITE;
          v17 = *((_QWORD *)forc_fmt::format_file::__CALLSITE + 7);
          v46 = *((_OWORD *)forc_fmt::format_file::__CALLSITE + 3);
          v47 = *((_OWORD *)forc_fmt::format_file::__CALLSITE + 4);
          v48 = 0LL;
          v49 = v17;
          <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v43, &v46);
          if ( (_QWORD)v43 )
          {
            v61 = v45;
            v60 = v44;
            v59 = v43;
            v56 = (unsigned __int128 **)v55;
            v57 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v52 = &v59;
            v53 = &v43;
            v54 = &unk_80A3A8;
            *(_QWORD *)&v46 = &v52;
            *((_QWORD *)&v46 + 1) = 1LL;
            *(_QWORD *)&v47 = v16 + 48;
            forc_fmt::format_file::{{closure}}(&v46, &v46, v18, v19, v20, v21, &off_80A330, 2LL, &v56, 1LL, 0LL);
LABEL_40:
            v34 = 1;
            forc_fmt::display_file_diff(*((_QWORD *)&v66 + 1), v67, *((_QWORD *)&v50 + 1), v51);
            goto LABEL_41;
          }
        }
        else
        {
          if ( (unsigned __int8)core::sync::atomic::atomic_load(&tracing_core::dispatcher::EXISTS) )
            goto LABEL_40;
          if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) < 3 )
            goto LABEL_40;
          v35 = forc_fmt::format_file::__CALLSITE;
          v36 = *((_OWORD *)forc_fmt::format_file::__CALLSITE + 2);
          *(_QWORD *)v68 = 3LL;
          *(_OWORD *)&v68[8] = v36;
          v37 = log::logger();
          v39 = v38;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, _BYTE *))(v38 + 24))(v37, v68) )
            goto LABEL_40;
          v40 = (char *)forc_fmt::format_file::__CALLSITE;
          v41 = *((_QWORD *)forc_fmt::format_file::__CALLSITE + 7);
          v46 = *((_OWORD *)forc_fmt::format_file::__CALLSITE + 3);
          v47 = *((_OWORD *)forc_fmt::format_file::__CALLSITE + 4);
          v48 = 0LL;
          v49 = v41;
          <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v43, &v46);
          if ( (_QWORD)v43 )
          {
            v61 = v45;
            v60 = v44;
            v59 = v43;
            v64 = (__int128 *)v55;
            v65 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v52 = &v59;
            v53 = &v43;
            v54 = &unk_80A3A8;
            v56 = &v52;
            v57 = (__int64 (__fastcall *)())(&dword_0 + 1);
            v58 = v40 + 48;
            *(_QWORD *)&v47 = *(_QWORD *)&v68[16];
            v46 = *(_OWORD *)v68;
            tracing::__macro_support::__tracing_log(v35, v37, v39, &v46, &v56, v42, &off_80A330, 2LL, &v64, 1LL, 0LL);
            goto LABEL_40;
          }
        }
        core::option::expect_failed(aFieldsetCorrup, 34LL, &off_80A390);
      }
    }
    else
    {
      v32 = forc_fmt::write_file_formatted(*(_QWORD *)&v55[8], *(_QWORD *)&v55[16], *((_QWORD *)&v50 + 1), v51);
      if ( v32 )
      {
        *(_QWORD *)(a1 + 8) = v32;
        v33 = 1;
LABEL_42:
        *(_BYTE *)a1 = v33;
        core::ptr::drop_in_place<alloc::string::String>(&v50);
LABEL_43:
        core::ptr::drop_in_place<alloc::string::String>(&v66);
        if ( (_QWORD)v62 == 0x8000000000000000LL )
          core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v62);
        goto LABEL_8;
      }
    }
    v34 = 0;
LABEL_41:
    *(_BYTE *)(a1 + 1) = v34;
    v33 = 0;
    goto LABEL_42;
  }
  *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(*((_QWORD *)&v43 + 1));
  *(_BYTE *)a1 = 1;
  return core::ptr::drop_in_place<std::path::PathBuf>(a3);
}