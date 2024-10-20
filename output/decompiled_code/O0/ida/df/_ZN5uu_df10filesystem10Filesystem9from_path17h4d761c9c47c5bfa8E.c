__int64 __fastcall uu_df::filesystem::Filesystem::from_path(int a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // r8d
  int v11; // r9d
  int v12; // r8d
  int v13; // r9d
  int v15; // [rsp+0h] [rbp-178h]
  int v16; // [rsp+0h] [rbp-178h]
  char v17[8]; // [rsp+0h] [rbp-178h]
  int v18; // [rsp+8h] [rbp-170h]
  int v19; // [rsp+8h] [rbp-170h]
  int v20[2]; // [rsp+8h] [rbp-170h]
  int v21; // [rsp+10h] [rbp-168h]
  int v22; // [rsp+10h] [rbp-168h]
  int v23; // [rsp+18h] [rbp-160h]
  int v24; // [rsp+18h] [rbp-160h]
  int v26; // [rsp+20h] [rbp-158h]
  char v27; // [rsp+20h] [rbp-158h]
  int v28; // [rsp+28h] [rbp-150h]
  int v29; // [rsp+28h] [rbp-150h]
  int desta; // [rsp+30h] [rbp-148h]
  void *dest; // [rsp+30h] [rbp-148h]
  void *destb; // [rsp+30h] [rbp-148h]
  int v33; // [rsp+38h] [rbp-140h]
  char v34[8]; // [rsp+38h] [rbp-140h]
  int v35; // [rsp+40h] [rbp-138h]
  int v36; // [rsp+40h] [rbp-138h]
  int v37; // [rsp+40h] [rbp-138h]
  int v38; // [rsp+48h] [rbp-130h]
  int v39; // [rsp+48h] [rbp-130h]
  int v40; // [rsp+48h] [rbp-130h]
  char v41[8]; // [rsp+50h] [rbp-128h] BYREF
  int v42[4]; // [rsp+58h] [rbp-120h] BYREF
  struct _Unwind_Exception *v43; // [rsp+68h] [rbp-110h]
  int v44[2]; // [rsp+70h] [rbp-108h] BYREF
  int v45[2]; // [rsp+78h] [rbp-100h]
  char v46[8]; // [rsp+80h] [rbp-F8h]
  int src; // [rsp+88h] [rbp-F0h] BYREF
  struct _Unwind_Exception *v48; // [rsp+90h] [rbp-E8h]
  int v49; // [rsp+98h] [rbp-E0h]
  int v50; // [rsp+A0h] [rbp-D8h]
  int v51; // [rsp+A8h] [rbp-D0h]
  struct _Unwind_Exception *v52; // [rsp+B0h] [rbp-C8h]
  int v53; // [rsp+B8h] [rbp-C0h]
  int v54; // [rsp+C0h] [rbp-B8h]
  int v55; // [rsp+C8h] [rbp-B0h]
  int v56; // [rsp+D0h] [rbp-A8h]
  int v57; // [rsp+D8h] [rbp-A0h]
  int v58; // [rsp+E0h] [rbp-98h]
  int v59; // [rsp+E8h] [rbp-90h]
  int v60; // [rsp+F0h] [rbp-88h]
  int v61; // [rsp+F8h] [rbp-80h]
  int v62; // [rsp+100h] [rbp-78h]
  int v63; // [rsp+108h] [rbp-70h]
  int v64; // [rsp+110h] [rbp-68h]
  int v65; // [rsp+118h] [rbp-60h]
  __int128 v66; // [rsp+120h] [rbp-58h]
  struct _Unwind_Exception *v67; // [rsp+130h] [rbp-48h]
  int v68; // [rsp+138h] [rbp-40h]
  __int128 v69; // [rsp+140h] [rbp-38h]
  struct _Unwind_Exception *v70; // [rsp+150h] [rbp-28h]
  int v71; // [rsp+158h] [rbp-20h]
  char v72; // [rsp+166h] [rbp-12h]
  char v73; // [rsp+167h] [rbp-11h]

  *(_QWORD *)v41 = a4;
  v72 = 0;
  v73 = 1;
  v4 = <&T as core::convert::AsRef<U>>::as_ref(v41);
  v35 = v5;
  v38 = v4;
  v6 = std::path::Path::display(v4, v5);
  <T as alloc::string::ToString>::to_string(
    (int)v42,
    (int)v44,
    v7,
    v6,
    v8,
    v9,
    v15,
    v18,
    v7,
    v6,
    a3,
    a2,
    a1,
    a1,
    v35,
    v38,
    *(int *)v41,
    v42[0],
    v42[2],
    (int)v43,
    v6,
    v7,
    *(int *)v46,
    src,
    v48,
    v49);
  v72 = 1;
  v73 = 0;
  *(_QWORD *)v20 = uu_df::filesystem::mount_info_from_path(
                     v28,
                     v26,
                     *(int *)v41,
                     1,
                     v10,
                     v11,
                     v16,
                     v19,
                     v21,
                     v23,
                     v26,
                     v28,
                     desta,
                     v33,
                     v36,
                     v39,
                     *(int *)v41,
                     v42[0],
                     v42[2],
                     (int)v43,
                     v44[0],
                     v45[0],
                     *(int *)v46,
                     src,
                     (char)v48,
                     v49,
                     v50,
                     v51,
                     (int)v52,
                     v53,
                     v54,
                     v55,
                     v56,
                     v57,
                     v58,
                     v59,
                     v60,
                     v61,
                     v62,
                     v63,
                     v64,
                     v65,
                     v66,
                     SDWORD2(v66),
                     (int)v67,
                     v68,
                     v69,
                     SDWORD2(v69),
                     v70,
                     v71);
  *(_QWORD *)v17 = <core::option::Option<T> as core::ops::try_trait::Try>::branch(*(_QWORD *)v20);
  *(_QWORD *)v46 = *(_QWORD *)v17;
  if ( *(_QWORD *)v17 )
  {
    <uucore::features::fsext::MountInfo as core::clone::Clone>::clone(
      (int)&src,
      *(int *)v46,
      *(int *)v17,
      1,
      v12,
      v13,
      *(int *)v17,
      v20[0],
      v22,
      v24,
      v27,
      v29,
      (int)dest,
      v34[0],
      v37,
      v40,
      v41[0],
      v42[0],
      v42[2],
      (char)v43,
      v44[0],
      v45[0],
      v46[0],
      src,
      (int)v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v72 = 0;
    v70 = v43;
    v69 = *(_OWORD *)v42;
    v67 = v43;
    v66 = *(_OWORD *)v42;
    uu_df::filesystem::Filesystem::new(destb, &src);
  }
  else
  {
    <core::option::Option<T> as core::ops::try_trait::FromResidual>::from_residual(dest);
    core::ptr::drop_in_place<alloc::string::String>(v42);
  }
  return *(_QWORD *)v34;
}
