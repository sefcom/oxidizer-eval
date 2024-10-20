__int64 __fastcall uu_df::get_named_filesystems(_QWORD *a1, __int64 a2, struct _Unwind_Exception *a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // [rsp+0h] [rbp-6D8h]
  int v30; // [rsp+8h] [rbp-6D0h]
  __int64 v31; // [rsp+10h] [rbp-6C8h]
  unsigned int v32; // [rsp+14h] [rbp-6C4h]
  int v33; // [rsp+18h] [rbp-6C0h]
  int v34; // [rsp+20h] [rbp-6B8h]
  int v35; // [rsp+28h] [rbp-6B0h]
  unsigned int v36; // [rsp+2Ch] [rbp-6ACh]
  int v37; // [rsp+30h] [rbp-6A8h]
  int v38; // [rsp+38h] [rbp-6A0h]
  int v39; // [rsp+40h] [rbp-698h]
  unsigned int v40; // [rsp+44h] [rbp-694h]
  int v41; // [rsp+48h] [rbp-690h]
  int v42; // [rsp+50h] [rbp-688h]
  int v43; // [rsp+58h] [rbp-680h]
  int v44; // [rsp+60h] [rbp-678h]
  int v45; // [rsp+68h] [rbp-670h]
  int v46; // [rsp+70h] [rbp-668h]
  int v47; // [rsp+78h] [rbp-660h]
  int v48; // [rsp+80h] [rbp-658h]
  int v49; // [rsp+88h] [rbp-650h]
  char v50; // [rsp+8Fh] [rbp-649h]
  int v51; // [rsp+90h] [rbp-648h]
  int v52; // [rsp+98h] [rbp-640h]
  int v53; // [rsp+98h] [rbp-640h]
  int v54; // [rsp+A0h] [rbp-638h]
  int v55; // [rsp+A0h] [rbp-638h]
  int v56; // [rsp+A8h] [rbp-630h]
  int v57[2]; // [rsp+A8h] [rbp-630h]
  int v58; // [rsp+B0h] [rbp-628h]
  int v59; // [rsp+B8h] [rbp-620h]
  int v60[2]; // [rsp+C0h] [rbp-618h]
  int v61; // [rsp+C0h] [rbp-618h]
  int v62; // [rsp+C8h] [rbp-610h]
  int v63; // [rsp+D0h] [rbp-608h]
  int v64; // [rsp+D8h] [rbp-600h]
  int v65; // [rsp+E0h] [rbp-5F8h]
  int v66; // [rsp+E8h] [rbp-5F0h]
  char is_empty; // [rsp+EFh] [rbp-5E9h]
  int *v68; // [rsp+F0h] [rbp-5E8h]
  int *v69; // [rsp+F8h] [rbp-5E0h]
  int *v70; // [rsp+100h] [rbp-5D8h]
  int v71[2]; // [rsp+108h] [rbp-5D0h]
  struct _Unwind_Exception *v72; // [rsp+110h] [rbp-5C8h]
  int v73; // [rsp+118h] [rbp-5C0h]
  _QWORD *v74; // [rsp+120h] [rbp-5B8h]
  int v75[2]; // [rsp+128h] [rbp-5B0h]
  int v76[6]; // [rsp+130h] [rbp-5A8h] BYREF
  int v77[6]; // [rsp+148h] [rbp-590h] BYREF
  struct _Unwind_Exception *v78; // [rsp+160h] [rbp-578h]
  int v79[8]; // [rsp+168h] [rbp-570h] BYREF
  int v80[6]; // [rsp+188h] [rbp-550h] BYREF
  __int128 v81; // [rsp+1A0h] [rbp-538h] BYREF
  __int64 v82; // [rsp+1B0h] [rbp-528h]
  _BYTE v83[24]; // [rsp+1B8h] [rbp-520h] BYREF
  __int128 v84; // [rsp+1D0h] [rbp-508h] BYREF
  __int64 v85; // [rsp+1E0h] [rbp-4F8h]
  int v86[2]; // [rsp+1E8h] [rbp-4F0h] BYREF
  __int64 v87; // [rsp+1F0h] [rbp-4E8h]
  __int64 v88; // [rsp+1F8h] [rbp-4E0h]
  _QWORD v89[2]; // [rsp+200h] [rbp-4D8h] BYREF
  _BYTE v90[48]; // [rsp+210h] [rbp-4C8h] BYREF
  _OWORD v91[2]; // [rsp+240h] [rbp-498h] BYREF
  __int128 v92; // [rsp+260h] [rbp-478h]
  _QWORD v93[2]; // [rsp+270h] [rbp-468h] BYREF
  __int128 v94; // [rsp+280h] [rbp-458h]
  __int64 v95; // [rsp+290h] [rbp-448h]
  __int64 v96; // [rsp+298h] [rbp-440h]
  __int64 v97; // [rsp+2A0h] [rbp-438h]
  _QWORD v98[2]; // [rsp+2A8h] [rbp-430h] BYREF
  int v99[2]; // [rsp+2B8h] [rbp-420h]
  _QWORD src[29]; // [rsp+2C0h] [rbp-418h] BYREF
  _BYTE dest[232]; // [rsp+3A8h] [rbp-330h] BYREF
  _QWORD v102[2]; // [rsp+490h] [rbp-248h] BYREF
  _BYTE v103[48]; // [rsp+4A0h] [rbp-238h] BYREF
  _OWORD v104[2]; // [rsp+4D0h] [rbp-208h] BYREF
  __int128 v105; // [rsp+4F0h] [rbp-1E8h]
  _QWORD v106[2]; // [rsp+500h] [rbp-1D8h] BYREF
  __int128 v107; // [rsp+510h] [rbp-1C8h]
  _QWORD v108[2]; // [rsp+520h] [rbp-1B8h] BYREF
  _QWORD v109[3]; // [rsp+530h] [rbp-1A8h] BYREF
  _QWORD v110[3]; // [rsp+548h] [rbp-190h] BYREF
  _BYTE v111[48]; // [rsp+560h] [rbp-178h] BYREF
  __int128 v112; // [rsp+590h] [rbp-148h] BYREF
  __int128 v113; // [rsp+5A0h] [rbp-138h]
  _QWORD v114[2]; // [rsp+5B0h] [rbp-128h] BYREF
  _BYTE v115[48]; // [rsp+5C0h] [rbp-118h] BYREF
  _OWORD v116[2]; // [rsp+5F0h] [rbp-E8h] BYREF
  __int128 v117; // [rsp+610h] [rbp-C8h]
  _QWORD v118[2]; // [rsp+620h] [rbp-B8h] BYREF
  __int128 v119; // [rsp+630h] [rbp-A8h]
  __int64 v120; // [rsp+640h] [rbp-98h]
  __int64 v121; // [rsp+648h] [rbp-90h]
  __int64 v122; // [rsp+650h] [rbp-88h]
  _QWORD *v123; // [rsp+668h] [rbp-70h]
  __int64 (__fastcall *v124)(); // [rsp+670h] [rbp-68h]
  _QWORD *v125; // [rsp+678h] [rbp-60h]
  __int64 (__fastcall *v126)(); // [rsp+680h] [rbp-58h]
  _QWORD *v127; // [rsp+688h] [rbp-50h]
  __int64 (__fastcall *v128)(); // [rsp+690h] [rbp-48h]
  _QWORD *v129; // [rsp+698h] [rbp-40h]
  __int64 (__fastcall *v130)(); // [rsp+6A0h] [rbp-38h]
  _QWORD *v131; // [rsp+6A8h] [rbp-30h]
  __int64 (__fastcall *v132)(); // [rsp+6B0h] [rbp-28h]
  _QWORD *v133; // [rsp+6B8h] [rbp-20h]
  __int64 (__fastcall *v134)(); // [rsp+6C0h] [rbp-18h]
  _QWORD *v135; // [rsp+6C8h] [rbp-10h]
  __int64 (__fastcall *v136)(); // [rsp+6D0h] [rbp-8h]

  *(_QWORD *)v71 = a4;
  v72 = a3;
  v73 = a2;
  v74 = a1;
  *(_QWORD *)v75 = a1;
  uucore::features::fsext::read_fs_list(v83);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v81, v83);
  if ( (_QWORD)v81 == 0x8000000000000000LL )
  {
    <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
      a1,
      *((_QWORD *)&v81 + 1),
      v82,
      &off_128860);
  }
  else
  {
    v85 = v82;
    v84 = v81;
    v68 = v80;
    uu_df::filter_mount_list(v80, &v84, *(_QWORD *)v71);
    v69 = v79;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v79, v80);
    v70 = v77;
    core::iter::traits::iterator::Iterator::filter(v77, v79);
    core::iter::traits::iterator::Iterator::collect(v76, v77);
    alloc::vec::Vec<T>::new(v86);
    is_empty = alloc::vec::Vec<T,A>::is_empty(v76);
    if ( (is_empty & 1) != 0 )
    {
      v89[0] = uucore::mods::error::USimpleError::new(1LL, aNoFileSystemsP, 25LL);
      v89[1] = v27;
      v32 = (*(__int64 (__fastcall **)(_QWORD))(v27 + 96))(v89[0]);
      uucore::mods::error::set_exit_code(v32);
      v93[0] = uucore::util_name();
      v93[1] = v28;
      v125 = v93;
      v126 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v92 = v93;
      *((_QWORD *)&v92 + 1) = <&T as core::fmt::Display>::fmt;
      v131 = v89;
      v132 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v94 = v89;
      *((_QWORD *)&v94 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v91[0] = v92;
      v91[1] = v94;
      core::fmt::Arguments::new_v1(v90, &unk_128830, v91);
      std::io::stdio::_eprint(v90);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v89);
      v95 = *(_QWORD *)v86;
      v96 = v87;
      v97 = v88;
      *a1 = *(_QWORD *)v86;
      a1[1] = v96;
      a1[2] = v97;
      core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(v76);
    }
    else
    {
      v4 = core::slice::iter::<impl core::iter::traits::collect::IntoIterator for &[T]>::into_iter(a2, v72);
      v64 = v5;
      v65 = v4;
      v98[0] = v4;
      v98[1] = v5;
      while ( 1 )
      {
        *(_QWORD *)v60 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v98);
        *(_QWORD *)v99 = *(_QWORD *)v60;
        if ( !*(_QWORD *)v60 )
          break;
        v56 = v99[0];
        v6 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v76);
        uu_df::filesystem::Filesystem::from_path(
          (int)src,
          v6,
          v8,
          v56,
          v29,
          v30,
          v31,
          v33,
          v34,
          v35,
          v37,
          v38,
          v39,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v51,
          v52,
          v54,
          v56,
          v8,
          v6,
          v60[0],
          v62,
          v63,
          v64,
          v65,
          v66,
          (int)v68,
          (int)v69,
          (int)v70,
          v71[0],
          (int)v72,
          v73,
          (int)v74,
          v75[0],
          v76[0],
          v76[2],
          v76[4],
          v77[0],
          v77[2],
          v77[4],
          v78,
          v79[0]);
        if ( src[0] == 0x8000000000000000LL )
        {
          v9 = <&T as core::convert::AsRef<U>>::as_ref(*(_QWORD *)v57);
          v52 = v10;
          v54 = v9;
          v50 = std::path::Path::exists(v9, v10);
          if ( (v50 & 1) != 0 )
          {
            v17 = uucore::mods::error::USimpleError::new(1LL, aNoFileSystemsP, 25LL);
            v45 = v18;
            v46 = v17;
            v102[0] = v17;
            v102[1] = v18;
            v36 = (*(__int64 (__fastcall **)(__int64))(v18 + 96))(v17);
            uucore::mods::error::set_exit_code(v36);
            v25 = uucore::util_name();
            v33 = v26;
            v34 = v25;
            v106[0] = v25;
            v106[1] = v26;
            v127 = v106;
            v128 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v105 = v106;
            *((_QWORD *)&v105 + 1) = <&T as core::fmt::Display>::fmt;
            v133 = v102;
            v134 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)&v107 = v102;
            *((_QWORD *)&v107 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v104[0] = v105;
            v104[1] = v107;
            core::fmt::Arguments::new_v1(v103, &unk_128830, v104);
            std::io::stdio::_eprint(v103);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v102);
          }
          else
          {
            v15 = <&T as core::convert::AsRef<U>>::as_ref(*(_QWORD *)v57);
            v47 = v16;
            v48 = v15;
            v19 = std::path::Path::display(v15, v16);
            v43 = v20;
            v44 = v19;
            v114[0] = v19;
            v114[1] = v20;
            v123 = v114;
            v124 = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)&v113 = v114;
            *((_QWORD *)&v113 + 1) = <std::path::Display as core::fmt::Display>::fmt;
            v112 = v113;
            core::fmt::Arguments::new_v1(v111, &unk_128810, &v112);
            alloc::fmt::format(v110, v111);
            v109[0] = v110[0];
            v109[1] = v110[1];
            v109[2] = v110[2];
            v21 = uucore::mods::error::USimpleError::new(1LL, v109);
            v41 = v22;
            LOBYTE(v42) = v21;
            v108[0] = v21;
            v108[1] = v22;
            v40 = (*(__int64 (__fastcall **)(__int64))(v22 + 96))(v21);
            uucore::mods::error::set_exit_code(v40);
            v23 = uucore::util_name();
            v37 = v24;
            v38 = v23;
            v118[0] = v23;
            v118[1] = v24;
            v129 = v118;
            v130 = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v117 = v118;
            *((_QWORD *)&v117 + 1) = <&T as core::fmt::Display>::fmt;
            v135 = v108;
            v136 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)&v119 = v108;
            *((_QWORD *)&v119 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v116[0] = v117;
            v116[1] = v119;
            core::fmt::Arguments::new_v1(v115, &unk_128830, v116);
            std::io::stdio::_eprint(v115);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v108);
          }
        }
        else
        {
          memcpy(dest, src, sizeof(dest));
          alloc::vec::Vec<T,A>::push(
            (int)v86,
            (int)dest,
            v11,
            v12,
            v13,
            v14,
            v29,
            v30,
            v31,
            v33,
            v34,
            v35,
            v37,
            v38,
            v39,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            (int)dest,
            v53,
            v55,
            v57[0],
            v58,
            v59,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            (int)v68,
            (int)v69,
            (int)v70,
            v71[0],
            v72,
            v73);
        }
      }
      v120 = *(_QWORD *)v86;
      v121 = v87;
      v122 = v88;
      *v74 = *(_QWORD *)v86;
      v74[1] = v121;
      v74[2] = v122;
      core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(v76);
    }
  }
  return *(_QWORD *)v75;
}
