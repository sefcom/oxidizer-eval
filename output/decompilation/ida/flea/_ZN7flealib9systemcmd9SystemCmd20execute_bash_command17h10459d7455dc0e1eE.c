__int64 __fastcall flealib::systemcmd::SystemCmd::execute_bash_command(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  __int128 v9; // [rsp+0h] [rbp-318h] BYREF
  __int128 *v10; // [rsp+10h] [rbp-308h]
  __int64 (__fastcall *v11)(); // [rsp+18h] [rbp-300h]
  __int128 *v12; // [rsp+20h] [rbp-2F8h]
  __int64 (__fastcall *v13)(); // [rsp+28h] [rbp-2F0h]
  __int128 v14; // [rsp+30h] [rbp-2E8h] BYREF
  __int128 *v15; // [rsp+40h] [rbp-2D8h]
  __int64 v16; // [rsp+50h] [rbp-2C8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-2C0h]
  __int64 *v18; // [rsp+60h] [rbp-2B8h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+68h] [rbp-2B0h]
  __int128 *v20; // [rsp+70h] [rbp-2A8h]
  __int64 v21; // [rsp+78h] [rbp-2A0h]
  __int64 v22; // [rsp+80h] [rbp-298h]
  __int128 v23; // [rsp+90h] [rbp-288h] BYREF
  __int128 v24; // [rsp+A0h] [rbp-278h]
  __int128 v25; // [rsp+B0h] [rbp-268h]
  __int64 v26; // [rsp+C0h] [rbp-258h] BYREF
  __int128 v27; // [rsp+C8h] [rbp-250h] BYREF
  _QWORD **v28; // [rsp+D8h] [rbp-240h]
  __int128 v29; // [rsp+E0h] [rbp-238h] BYREF
  _QWORD **v30; // [rsp+F0h] [rbp-228h]
  _BYTE v31[16]; // [rsp+F8h] [rbp-220h] BYREF
  unsigned __int64 v32; // [rsp+108h] [rbp-210h]
  __int128 v33; // [rsp+110h] [rbp-208h] BYREF
  __int64 v34; // [rsp+120h] [rbp-1F8h]
  _QWORD v35[2]; // [rsp+128h] [rbp-1F0h] BYREF
  _OWORD v36[3]; // [rsp+138h] [rbp-1E0h] BYREF
  __int64 v37; // [rsp+168h] [rbp-1B0h]
  __int128 v38; // [rsp+170h] [rbp-1A8h] BYREF
  __int64 v39; // [rsp+180h] [rbp-198h]
  __int128 v40; // [rsp+188h] [rbp-190h] BYREF
  __int64 v41; // [rsp+198h] [rbp-180h]
  __int128 v42; // [rsp+1A0h] [rbp-178h] BYREF
  _OWORD *v43; // [rsp+1B0h] [rbp-168h]
  __int64 v44; // [rsp+1B8h] [rbp-160h]
  __int64 v45; // [rsp+1C0h] [rbp-158h]
  _BYTE v46[104]; // [rsp+270h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+2D8h] [rbp-40h]
  __int64 v48; // [rsp+2E0h] [rbp-38h]
  __int16 v49; // [rsp+2E8h] [rbp-30h]

  v4 = a4;
  v5 = a3;
  v16 = a3;
  v17 = a4;
  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 4 )
  {
    *(_QWORD *)&v9 = &v16;
    *(_QWORD *)&v36[0] = &v9;
    *((_QWORD *)&v36[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v42 = &off_708F50;
    *((_QWORD *)&v42 + 1) = 1LL;
    v45 = 0LL;
    v43 = v36;
    v44 = 1LL;
    v6 = log::__private_api::loc(&off_708FB0);
    *(_QWORD *)&v23 = aFlealibSystemc;
    *((_QWORD *)&v23 + 1) = 18LL;
    *(_QWORD *)&v24 = aFlealibSystemc;
    *((_QWORD *)&v24 + 1) = 18LL;
    *(_QWORD *)&v25 = v6;
    log::__private_api::log(&v42, 4LL, &v23);
    v5 = v16;
    v4 = v17;
  }
  core::str::pattern::StrSearcher::new(v46, v5, v4, aCd_0, 3LL);
  v47 = 0LL;
  v48 = v4;
  v49 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v31, v46, &off_708FC8);
  if ( v32 <= 1 )
  {
    std::process::Command::new(&v42, v16, v17);
    std::process::Command::output(v36, &v42);
    if ( __OFSUB__(0LL, *(_QWORD *)&v36[0]) )
    {
      v7 = *((_QWORD *)&v36[0] + 1);
      *(_QWORD *)&v23 = *((_QWORD *)&v36[0] + 1);
      <T as alloc::string::SpecToString>::spec_to_string(a1, &v23);
      core::ptr::drop_in_place<std::io::error::Error>(v7);
    }
    else
    {
      v26 = v37;
      v25 = v36[2];
      v24 = v36[1];
      v23 = v36[0];
      v18 = &v26;
      v19 = <std::process::ExitStatus as core::fmt::Display>::fmt;
      *(_QWORD *)&v9 = &off_708F60;
      *((_QWORD *)&v9 + 1) = 2LL;
      v12 = 0LL;
      v10 = (__int128 *)&v18;
      v11 = (__int64 (__fastcall *)())(&dword_0 + 1);
      core::option::Option<T>::map_or_else(&v38, &v9);
      v33 = v38;
      v34 = v39;
      alloc::string::String::from_utf8_lossy(&v18, v25, *((_QWORD *)&v25 + 1));
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v9, v19, v20);
      v15 = v10;
      v14 = v9;
      *(_QWORD *)&v29 = &v14;
      *((_QWORD *)&v29 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v9 = &off_708F80;
      *((_QWORD *)&v9 + 1) = 2LL;
      v12 = 0LL;
      v10 = &v29;
      v11 = (__int64 (__fastcall *)())(&dword_0 + 1);
      core::option::Option<T>::map_or_else(&v27, &v9);
      core::ptr::drop_in_place<alloc::string::String>(&v14);
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v18);
      v29 = v27;
      v30 = v28;
      alloc::string::String::from_utf8_lossy(&v18, *((_QWORD *)&v23 + 1), v24);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v9, v19, v20);
      v15 = v10;
      v14 = v9;
      v35[0] = &v14;
      v35[1] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v9 = &off_708FA0;
      *((_QWORD *)&v9 + 1) = 1LL;
      v12 = 0LL;
      v10 = (__int128 *)v35;
      v11 = (__int64 (__fastcall *)())(&dword_0 + 1);
      core::option::Option<T>::map_or_else(&v27, &v9);
      core::ptr::drop_in_place<alloc::string::String>(&v14);
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v18);
      v14 = v27;
      v15 = (__int128 *)v28;
      *(_QWORD *)&v9 = &v33;
      *((_QWORD *)&v9 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v10 = &v29;
      v11 = <alloc::string::String as core::fmt::Display>::fmt;
      v12 = &v14;
      v13 = <alloc::string::String as core::fmt::Display>::fmt;
      v18 = (__int64 *)&unk_6A830;
      v19 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v22 = 0LL;
      v20 = &v9;
      v21 = 3LL;
      core::option::Option<T>::map_or_else(&v40, &v18);
      *(_QWORD *)(a1 + 16) = v41;
      *(_OWORD *)a1 = v40;
      core::ptr::drop_in_place<alloc::string::String>(&v14);
      core::ptr::drop_in_place<alloc::string::String>(&v29);
      core::ptr::drop_in_place<alloc::string::String>(&v33);
      core::ptr::drop_in_place<std::process::Output>(&v23);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v31);
    core::ptr::drop_in_place<std::process::Command>(&v42);
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v42, aUseCdCommandTo, 38LL);
    *(_QWORD *)(a1 + 16) = v43;
    *(_OWORD *)a1 = v42;
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v31);
  }
  return a1;
}