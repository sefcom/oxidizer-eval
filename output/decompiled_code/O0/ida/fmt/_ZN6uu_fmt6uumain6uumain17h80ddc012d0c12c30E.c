__int64 __fastcall uu_fmt::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // esi
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // esi
  struct _Unwind_Exception *v36; // rdx
  int v37; // r8d
  int v38; // r9d
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  struct _Unwind_Exception *v43; // [rsp+0h] [rbp-928h]
  struct _Unwind_Exception *v44; // [rsp+0h] [rbp-928h]
  struct _Unwind_Exception *v45; // [rsp+0h] [rbp-928h]
  struct _Unwind_Exception *v46; // [rsp+0h] [rbp-928h]
  int v47; // [rsp+8h] [rbp-920h]
  int v48; // [rsp+8h] [rbp-920h]
  int v49; // [rsp+8h] [rbp-920h]
  int v50; // [rsp+8h] [rbp-920h]
  struct _Unwind_Exception *v51; // [rsp+10h] [rbp-918h]
  int v52; // [rsp+18h] [rbp-910h]
  unsigned int v53; // [rsp+FCh] [rbp-82Ch]
  char v54; // [rsp+127h] [rbp-801h]
  __int64 v55; // [rsp+168h] [rbp-7C0h]
  int v56[6]; // [rsp+178h] [rbp-7B0h] BYREF
  __int64 v57; // [rsp+190h] [rbp-798h]
  _BYTE v58[31]; // [rsp+198h] [rbp-790h] BYREF
  char v59; // [rsp+1B7h] [rbp-771h]
  _QWORD v60[2]; // [rsp+1B8h] [rbp-770h] BYREF
  _BYTE v61[24]; // [rsp+1C8h] [rbp-760h] BYREF
  _QWORD v62[3]; // [rsp+1E0h] [rbp-748h] BYREF
  _QWORD v63[3]; // [rsp+1F8h] [rbp-730h] BYREF
  _BYTE v64[48]; // [rsp+210h] [rbp-718h] BYREF
  __int128 v65; // [rsp+240h] [rbp-6E8h] BYREF
  __int128 v66; // [rsp+250h] [rbp-6D8h]
  _BYTE v67[32]; // [rsp+260h] [rbp-6C8h] BYREF
  _OWORD v68[6]; // [rsp+280h] [rbp-6A8h] BYREF
  __int64 v69; // [rsp+2E0h] [rbp-648h]
  __int128 v70; // [rsp+2E8h] [rbp-640h] BYREF
  __int128 v71; // [rsp+2F8h] [rbp-630h]
  __int128 v72; // [rsp+308h] [rbp-620h]
  __int128 v73; // [rsp+318h] [rbp-610h]
  __int128 v74; // [rsp+328h] [rbp-600h]
  __int128 v75; // [rsp+338h] [rbp-5F0h]
  __int64 v76; // [rsp+348h] [rbp-5E0h]
  int v77[26]; // [rsp+350h] [rbp-5D8h] BYREF
  int dest[178]; // [rsp+3B8h] [rbp-570h] BYREF
  __int128 v79; // [rsp+680h] [rbp-2A8h]
  __int128 v80; // [rsp+690h] [rbp-298h]
  __int128 v81; // [rsp+6A0h] [rbp-288h]
  __int128 v82; // [rsp+6B0h] [rbp-278h]
  __int128 v83; // [rsp+6C0h] [rbp-268h]
  __int128 v84; // [rsp+6D0h] [rbp-258h]
  __int64 v85; // [rsp+6E0h] [rbp-248h]
  __int128 v86; // [rsp+6F0h] [rbp-238h] BYREF
  __int64 v87; // [rsp+700h] [rbp-228h]
  __int128 v88; // [rsp+710h] [rbp-218h] BYREF
  __int64 v89; // [rsp+720h] [rbp-208h]
  _BYTE v90[24]; // [rsp+728h] [rbp-200h] BYREF
  __int128 v91; // [rsp+740h] [rbp-1E8h]
  __int64 v92; // [rsp+750h] [rbp-1D8h]
  int v93[4]; // [rsp+760h] [rbp-1C8h] BYREF
  __int128 v94; // [rsp+770h] [rbp-1B8h]
  __int128 v95; // [rsp+780h] [rbp-1A8h]
  __int128 v96; // [rsp+790h] [rbp-198h]
  __int128 v97; // [rsp+7A0h] [rbp-188h]
  __int128 v98; // [rsp+7B0h] [rbp-178h] BYREF
  __int128 v99; // [rsp+7C0h] [rbp-168h]
  __int128 v100; // [rsp+7D0h] [rbp-158h]
  __int128 v101; // [rsp+7E0h] [rbp-148h]
  __int128 v102; // [rsp+7F0h] [rbp-138h]
  _BYTE v103[80]; // [rsp+800h] [rbp-128h] BYREF
  __int128 v104; // [rsp+850h] [rbp-D8h]
  __int128 v105; // [rsp+860h] [rbp-C8h]
  __int128 v106; // [rsp+870h] [rbp-B8h]
  __int128 v107; // [rsp+880h] [rbp-A8h]
  __int128 v108; // [rsp+890h] [rbp-98h]
  int v109[10]; // [rsp+8A8h] [rbp-80h] BYREF
  _QWORD v110[2]; // [rsp+8D0h] [rbp-58h] BYREF
  int v111[2]; // [rsp+8E0h] [rbp-48h]
  __int64 v112; // [rsp+8E8h] [rbp-40h]
  __int64 v113; // [rsp+8F0h] [rbp-38h]
  _BYTE *v114; // [rsp+908h] [rbp-20h]
  __int64 (__fastcall *v115)(); // [rsp+910h] [rbp-18h]
  __int64 v116; // [rsp+918h] [rbp-10h]
  __int64 v117; // [rsp+920h] [rbp-8h]

  core::iter::traits::iterator::Iterator::collect(v56, a1, a2);
  v2 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v56);
  v57 = core::slice::<impl [T]>::get(v2, v3, 1LL);
  if ( v57 != 0 )
  {
    v4 = <std::ffi::os_str::OsString as core::ops::deref::Deref>::deref(v57);
    std::ffi::os_str::OsStr::to_string_lossy(v58, v4, v5);
    v6 = (void *)<alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v58);
    v54 = core::str::<impl str>::starts_with(v6);
    if ( (v54 & 1) != 0
      && (v7 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v58),
          v60[0] = core::str::<impl str>::chars(v7, v8),
          v60[1] = v9,
          v53 = core::iter::traits::iterator::Iterator::nth(v60, 1LL),
          (core::option::Option<T>::is_some_and(v53) & 1) != 0) )
    {
      v10 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v58);
      v12 = core::str::<impl str>::chars(v10, v11);
      core::iter::traits::iterator::Iterator::skip(v61, v12, v13, 2LL);
      v59 = core::iter::traits::iterator::Iterator::any(v61) & 1;
    }
    else
    {
      v59 = 0;
    }
    if ( (v59 & 1) != 0 )
    {
      v14 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(v58);
      v116 = core::str::<impl str>::strip_prefix(v14, v15, 45LL);
      v117 = v16;
      if ( !v116 )
        core::option::unwrap_failed(&off_111918);
      <str as os_display::native::Quotable>::quote(v67, v116, v117);
      v114 = v67;
      v115 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v66 = v67;
      *((_QWORD *)&v66 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v65 = v66;
      core::fmt::Arguments::new_v1(v64, &off_111908, &v65);
      alloc::fmt::format(v63, v64);
      v62[0] = v63[0];
      v62[1] = v63[1];
      v62[2] = v63[2];
      v55 = uucore::mods::error::USimpleError::new(1LL, v62);
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v58);
      goto LABEL_13;
    }
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v58);
  }
  uu_fmt::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v77,
    (int)dest,
    (int)v56,
    v17,
    v18,
    v19,
    (__int64)v43,
    v47,
    v51,
    v52);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v70, v77);
  if ( (_QWORD)v70 == 0x8000000000000000LL )
  {
    v55 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v70 + 1),
            &off_111978);
  }
  else
  {
    v85 = v76;
    v84 = v75;
    v83 = v74;
    v82 = v73;
    v81 = v72;
    v80 = v71;
    v79 = v70;
    v69 = v76;
    v68[5] = v75;
    v68[4] = v74;
    v68[3] = v73;
    v68[2] = v72;
    v68[1] = v71;
    v68[0] = v70;
    uu_fmt::extract_files(v90, v68);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v88, v90);
    if ( (_QWORD)v88 == 0x8000000000000000LL )
    {
      v55 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *((_QWORD *)&v88 + 1),
              v89,
              &off_111960);
    }
    else
    {
      v92 = v89;
      v91 = v88;
      v87 = v89;
      v86 = v88;
      uu_fmt::FmtOptions::from_matches(v103, v68);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v98, v103);
      if ( (_QWORD)v98 == 0x8000000000000001LL )
      {
        v55 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                *((_QWORD *)&v98 + 1),
                v99,
                &off_111948);
      }
      else
      {
        v108 = v102;
        v107 = v101;
        v106 = v100;
        v105 = v99;
        v104 = v98;
        v97 = v102;
        v96 = v101;
        v95 = v100;
        v94 = v99;
        *(_OWORD *)v93 = v98;
        v20 = std::io::stdio::stdout();
        std::io::buffered::bufwriter::BufWriter<W>::new((int)v109, v20);
        v110[0] = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v86);
        v110[1] = v21;
        do
        {
          *(_QWORD *)v111 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v110);
          if ( !*(_QWORD *)v111 )
          {
            v55 = 0LL;
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(
              (int)v109,
              v20,
              0,
              0,
              v22,
              v23,
              v44,
              v48);
            core::ptr::drop_in_place<uu_fmt::FmtOptions>((int)v93, v20, v25, v26, v27, v28, v45, v49);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v86);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v68);
            core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v56);
            return v55;
          }
          v24 = <alloc::string::String as core::ops::deref::Deref>::deref(*(_QWORD *)v111);
          v31 = uu_fmt::process_file(v24, v30, v93, v109);
          v20 = v32;
          v33 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v31, v32);
          v112 = v33;
          v113 = v34;
        }
        while ( !v33 );
        v35 = v113;
        v55 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v112,
                v113,
                &off_111930);
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(
          (int)v109,
          v35,
          (int)v36,
          v55,
          v37,
          v38,
          v36,
          v55);
        core::ptr::drop_in_place<uu_fmt::FmtOptions>((int)v93, v35, v39, v40, v41, v42, v46, v50);
      }
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v86);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v68);
  }
LABEL_13:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v56);
  return v55;
}
