__int64 __fastcall flealib::systemcmd::SystemCmd::get_system_info(__int64 a1, _QWORD *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  __int128 v5; // xmm0
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 i; // rax
  __int64 j; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  _OWORD *v15; // rcx
  __int128 v17; // [rsp+0h] [rbp-258h] BYREF
  unsigned __int64 *v18; // [rsp+10h] [rbp-248h]
  __int64 (__fastcall *v19)(); // [rsp+18h] [rbp-240h]
  unsigned __int64 *v20; // [rsp+20h] [rbp-238h]
  __int64 (__fastcall *v21)(); // [rsp+28h] [rbp-230h]
  __int128 *v22; // [rsp+30h] [rbp-228h]
  __int64 (__fastcall *v23)(); // [rsp+38h] [rbp-220h]
  __int128 *v24; // [rsp+40h] [rbp-218h]
  __int64 (__fastcall *v25)(); // [rsp+48h] [rbp-210h]
  __int128 v26; // [rsp+58h] [rbp-200h] BYREF
  unsigned __int64 *v27; // [rsp+68h] [rbp-1F0h]
  __int64 v28; // [rsp+70h] [rbp-1E8h]
  __int64 v29; // [rsp+78h] [rbp-1E0h]
  int v30; // [rsp+8Ch] [rbp-1CCh]
  __int128 v31; // [rsp+90h] [rbp-1C8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-1B8h]
  __int128 v33; // [rsp+B0h] [rbp-1A8h] BYREF
  unsigned __int64 *v34; // [rsp+C0h] [rbp-198h]
  __int128 v35; // [rsp+D0h] [rbp-188h] BYREF
  __int128 v36; // [rsp+E0h] [rbp-178h]
  __int64 v37; // [rsp+F0h] [rbp-168h]
  unsigned __int64 v38; // [rsp+100h] [rbp-158h] BYREF
  unsigned __int64 v39; // [rsp+108h] [rbp-150h] BYREF
  __int128 v40; // [rsp+110h] [rbp-148h] BYREF
  unsigned __int64 *v41; // [rsp+120h] [rbp-138h]
  __int128 v42; // [rsp+140h] [rbp-118h] BYREF
  __int128 v43; // [rsp+150h] [rbp-108h]
  __int64 v44; // [rsp+160h] [rbp-F8h]
  __int64 v45; // [rsp+170h] [rbp-E8h]
  __int128 v46; // [rsp+178h] [rbp-E0h] BYREF
  __int64 v47; // [rsp+188h] [rbp-D0h]
  __int128 v48; // [rsp+190h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+1A0h] [rbp-B8h]
  __int64 v50; // [rsp+1A8h] [rbp-B0h] BYREF
  __int128 v51; // [rsp+1B0h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+1C0h] [rbp-98h]
  __int128 v53; // [rsp+1C8h] [rbp-90h] BYREF
  unsigned __int64 *v54; // [rsp+1D8h] [rbp-80h]
  __int128 v55; // [rsp+1E0h] [rbp-78h] BYREF
  unsigned __int64 *v56; // [rsp+1F0h] [rbp-68h]
  __int128 v57; // [rsp+1F8h] [rbp-60h] BYREF
  unsigned __int64 *v58; // [rsp+208h] [rbp-50h]
  __int128 v59; // [rsp+210h] [rbp-48h] BYREF
  unsigned __int64 *v60; // [rsp+220h] [rbp-38h]

  v45 = a1;
  sysinfo::common::System::refresh_all(a2);
  sysinfo::common::System::name(&v26);
  if ( __OFSUB__(0LL, (_QWORD)v26) )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, aUnknown, 9LL);
    v34 = v18;
    v2 = v17;
  }
  else
  {
    v34 = v27;
    v2 = v26;
  }
  v33 = v2;
  sysinfo::common::System::kernel_version(&v26);
  if ( (_QWORD)v26 == 0x8000000000000000LL )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, aUnknown, 9LL);
    *(_QWORD *)&v43 = v18;
    v3 = v17;
  }
  else
  {
    *(_QWORD *)&v43 = v27;
    v3 = v26;
  }
  v42 = v3;
  sysinfo::common::System::os_version(&v26);
  if ( (_QWORD)v26 == 0x8000000000000000LL )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, aUnknown, 9LL);
    *(_QWORD *)&v36 = v18;
    v4 = v17;
  }
  else
  {
    *(_QWORD *)&v36 = v27;
    v4 = v26;
  }
  v35 = v4;
  sysinfo::common::System::long_os_version(&v26);
  if ( (_QWORD)v26 == 0x8000000000000000LL )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, aUnknown, 9LL);
    v41 = v18;
    v5 = v17;
  }
  else
  {
    v41 = v27;
    v5 = v26;
  }
  v40 = v5;
  *(_QWORD *)&v48 = a2[35];
  *(_QWORD *)&v17 = &v33;
  *((_QWORD *)&v17 + 1) = <alloc::string::String as core::fmt::Debug>::fmt;
  v18 = (unsigned __int64 *)&v42;
  v19 = <alloc::string::String as core::fmt::Debug>::fmt;
  v20 = (unsigned __int64 *)&v35;
  v21 = <alloc::string::String as core::fmt::Debug>::fmt;
  v22 = &v40;
  v23 = <alloc::string::String as core::fmt::Debug>::fmt;
  v24 = &v48;
  v25 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)&v26 = &off_708FE0;
  *((_QWORD *)&v26 + 1) = 6LL;
  v29 = 0LL;
  v27 = (unsigned __int64 *)&v17;
  v28 = 5LL;
  core::option::Option<T>::map_or_else(&v46, &v26);
  core::ptr::drop_in_place<alloc::string::String>(&v40);
  core::ptr::drop_in_place<alloc::string::String>(&v35);
  core::ptr::drop_in_place<alloc::string::String>(&v42);
  core::ptr::drop_in_place<alloc::string::String>(&v33);
  v31 = v46;
  v32 = v47;
  v6 = a2[45];
  *(_QWORD *)&v33 = v6 >> 20;
  *(_QWORD *)&v42 = (v6 - a2[47]) >> 20;
  v7 = a2[52];
  *(_QWORD *)&v35 = v7 >> 20;
  *(_QWORD *)&v40 = (v7 - a2[53]) >> 20;
  *(_QWORD *)&v17 = &v33;
  *((_QWORD *)&v17 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v18 = (unsigned __int64 *)&v42;
  v19 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v20 = (unsigned __int64 *)&v35;
  v21 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v22 = &v40;
  v23 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)&v26 = &off_709040;
  *((_QWORD *)&v26 + 1) = 5LL;
  v29 = 0LL;
  v27 = (unsigned __int64 *)&v17;
  v28 = 4LL;
  core::option::Option<T>::map_or_else(&v51, &v26);
  v48 = v51;
  v49 = v52;
  alloc::vec::Vec<T,A>::append_elements(&v31, *((_QWORD *)&v51 + 1), v52, &off_708E40);
  alloc::vec::Vec<T,A>::append_elements(&v31, aUsers, 8LL, &off_708E40);
  sysinfo::common::Users::new_with_refreshed_list(&v46);
  *(_QWORD *)&v35 = *((_QWORD *)&v46 + 1);
  *((_QWORD *)&v35 + 1) = *((_QWORD *)&v46 + 1) + 56 * v47;
  for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v35);
        i;
        i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v35) )
  {
    v26 = *(_OWORD *)(i + 8);
    *(_QWORD *)&v40 = &v26;
    *((_QWORD *)&v40 + 1) = <&T as core::fmt::Debug>::fmt;
    *(_QWORD *)&v17 = &unk_709090;
    *((_QWORD *)&v17 + 1) = 2LL;
    v20 = 0LL;
    v18 = (unsigned __int64 *)&v40;
    v19 = (__int64 (__fastcall *)())(&dword_0 + 1);
    core::option::Option<T>::map_or_else(&v53, &v17);
    v17 = v53;
    v18 = v54;
    alloc::vec::Vec<T,A>::append_elements(&v31, *((_QWORD *)&v53 + 1), v54, &off_708E40);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
  }
  alloc::vec::Vec<T,A>::append_elements(&v31, aDisks, 8LL, &off_708E40);
  sysinfo::common::Disks::new_with_refreshed_list(&v33);
  *(_QWORD *)&v40 = *((_QWORD *)&v33 + 1);
  *((_QWORD *)&v40 + 1) = *((_QWORD *)&v33 + 1) + 112LL * (_QWORD)v34;
  for ( j = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v40);
        j;
        j = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v40) )
  {
    *(_QWORD *)&v35 = j;
    *(_QWORD *)&v26 = &v35;
    *((_QWORD *)&v26 + 1) = <&T as core::fmt::Debug>::fmt;
    *(_QWORD *)&v17 = &unk_709090;
    *((_QWORD *)&v17 + 1) = 2LL;
    v20 = 0LL;
    v18 = (unsigned __int64 *)&v26;
    v19 = (__int64 (__fastcall *)())(&dword_0 + 1);
    core::option::Option<T>::map_or_else(&v55, &v17);
    v17 = v55;
    v18 = v56;
    alloc::vec::Vec<T,A>::append_elements(&v31, *((_QWORD *)&v55 + 1), v56, &off_708E40);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
  }
  alloc::vec::Vec<T,A>::append_elements(&v31, aNetworks, 11LL, &off_708E40);
  v10 = sysinfo::common::Networks::new_with_refreshed_list(&v40);
  LOBYTE(v10) = 1;
  v30 = v10;
  <&sysinfo::common::Networks as core::iter::traits::collect::IntoIterator>::into_iter(&v42, &v40);
  v37 = v44;
  v36 = v43;
  v35 = v42;
  while ( 1 )
  {
    v11 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v35);
    if ( !v11 )
      break;
    v13 = v12;
    v50 = v11;
    v38 = sysinfo::common::NetworkData::received(v12);
    v39 = sysinfo::common::NetworkData::transmitted(v13);
    *(_QWORD *)&v17 = &v50;
    *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
    v18 = &v38;
    v19 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v20 = &v39;
    v21 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v26 = &unk_7090B0;
    *((_QWORD *)&v26 + 1) = 4LL;
    v29 = 0LL;
    v27 = (unsigned __int64 *)&v17;
    v28 = 3LL;
    core::option::Option<T>::map_or_else(&v57, &v26);
    v17 = v57;
    v18 = v58;
    alloc::vec::Vec<T,A>::append_elements(&v31, *((_QWORD *)&v57 + 1), v58, &off_708E40);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
  }
  alloc::vec::Vec<T,A>::append_elements(&v31, aUptime, 9LL, &off_708E40);
  v14 = sysinfo::common::System::uptime();
  v38 = v14 / 0x15180;
  v39 = (1193047 * (v14 % 0x15180)) >> 32;
  *(_QWORD *)&v42 = (2185
                   * ((unsigned int)v14
                    - 3600 * ((unsigned int)((0x91A2B3C4D5E6F81LL * (unsigned __int128)(v14 >> 4)) >> 64) >> 3))) >> 17;
  *(_QWORD *)&v35 = v14 % 0x3C;
  *(_QWORD *)&v17 = &v38;
  *((_QWORD *)&v17 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v18 = &v39;
  v19 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v20 = (unsigned __int64 *)&v42;
  v21 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v22 = &v35;
  v23 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)&v26 = &off_7090F0;
  *((_QWORD *)&v26 + 1) = 5LL;
  v29 = 0LL;
  v27 = (unsigned __int64 *)&v17;
  v28 = 4LL;
  core::option::Option<T>::map_or_else(&v59, &v26);
  v17 = v59;
  v18 = v60;
  alloc::vec::Vec<T,A>::append_elements(&v31, *((_QWORD *)&v59 + 1), v60, &off_708E40);
  v15 = (_OWORD *)v45;
  *(_QWORD *)(v45 + 16) = v32;
  *v15 = v31;
  v30 = 0;
  core::ptr::drop_in_place<alloc::string::String>(&v17);
  core::ptr::drop_in_place<sysinfo::common::Networks>(&v40);
  core::ptr::drop_in_place<sysinfo::common::Disks>(&v33);
  core::ptr::drop_in_place<sysinfo::common::Users>(&v46);
  core::ptr::drop_in_place<alloc::string::String>(&v48);
  return v45;
}