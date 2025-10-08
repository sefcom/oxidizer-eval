__int64 __fastcall rg::flags::complete::powershell::generate(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx
  __int64 v3; // rbp
  _QWORD *v4; // r12
  _QWORD *v5; // rdx
  int v6; // eax
  int v7; // edx
  __int64 (__fastcall *v8)(); // rdx
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r13
  int v12; // ebp
  __int64 v13; // r13
  __int64 v14; // rdx
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int128 v17; // rax
  int v18; // ebx
  __int64 v19; // r14
  int started; // eax
  int v21; // edx
  __int128 v23; // [rsp+10h] [rbp-138h] BYREF
  __int64 v24; // [rsp+20h] [rbp-128h]
  __int128 *v25; // [rsp+28h] [rbp-120h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+30h] [rbp-118h]
  __int64 v27; // [rsp+38h] [rbp-110h]
  __int128 v28; // [rsp+40h] [rbp-108h] BYREF
  _QWORD *v29; // [rsp+50h] [rbp-F8h]
  __int64 v30; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-E8h]
  __int64 v32; // [rsp+68h] [rbp-E0h]
  __int128 v33; // [rsp+70h] [rbp-D8h] BYREF
  __int128 *v34; // [rsp+80h] [rbp-C8h]
  __int64 v35; // [rsp+88h] [rbp-C0h]
  __int64 v36; // [rsp+90h] [rbp-B8h]
  __int128 v37; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-98h]
  __int128 v39; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-78h]
  __int64 v41; // [rsp+E0h] [rbp-68h]
  _QWORD v42[3]; // [rsp+E8h] [rbp-60h] BYREF
  _BYTE v43[8]; // [rsp+100h] [rbp-48h] BYREF
  __int64 v44; // [rsp+108h] [rbp-40h]
  __int64 v45; // [rsp+110h] [rbp-38h]

  v41 = a1;
  v30 = 0LL;
  v31 = 1LL;
  v32 = 0LL;
  v42[0] = &unk_3E9308;
  v42[1] = &off_3E9988;
  v42[2] = 0LL;
  v1 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v42);
  if ( v2 )
  {
    v3 = v1;
    v4 = v2;
    do
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(v4[1] + 88LL))(*v4);
      alloc::str::<impl str>::replace(
        (unsigned int)v43,
        v6,
        v7,
        (unsigned int)asc_6A233,
        1,
        (unsigned int)&unk_6A617,
        2LL);
      v25 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD))(v4[1] + 48LL))(*v4);
      v26 = v8;
      *(_QWORD *)&v28 = &v25;
      *((_QWORD *)&v28 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v33 = &off_3E5EE8;
      *((_QWORD *)&v33 + 1) = 1LL;
      v36 = 0LL;
      v34 = &v28;
      v35 = 1LL;
      core::option::Option<T>::map_or_else(&v23, 0LL, v8, &v33);
      v39 = v23;
      v40 = v24;
      v9 = (*(__int64 (__fastcall **)(_QWORD))(v4[1] + 48LL))(*v4);
      v11 = v10;
      if ( v3 )
        alloc::string::String::push(&v30, 10LL);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v30,
        &unk_6A603,
        &unk_6A609);
      alloc::str::<impl str>::replace(
        (unsigned int)&v33,
        (unsigned int)aCompletionresu,
        96,
        (unsigned int)aDashName,
        11,
        DWORD2(v39),
        v40);
      alloc::str::<impl str>::replace((unsigned int)&v23, DWORD2(v33), (_DWORD)v34, (unsigned int)aName_1, 6, v9, v11);
      v12 = v44;
      v13 = v45;
      alloc::str::<impl str>::replace((unsigned int)&v25, DWORD2(v23), v24, (unsigned int)aDoc, 5, v44, v45);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v30,
        v26,
        (char *)v26 + v27);
      core::ptr::drop_in_place<alloc::string::String>(&v25);
      core::ptr::drop_in_place<alloc::string::String>(&v23);
      core::ptr::drop_in_place<alloc::string::String>(&v33);
      if ( ((*(__int64 (__fastcall **)(_QWORD))(v4[1] + 40LL))(*v4) & 1) != 0 )
      {
        v15 = (unsigned __int8)v14;
        LODWORD(v28) = (unsigned __int8)v14;
        v25 = &v28;
        v26 = <char as core::fmt::Display>::fmt;
        *(_QWORD *)&v33 = &off_3E5EF8;
        *((_QWORD *)&v33 + 1) = 1LL;
        v36 = 0LL;
        v34 = (__int128 *)&v25;
        v35 = 1LL;
        core::option::Option<T>::map_or_else(&v23, 0LL, v14, &v33);
        v37 = v23;
        v38 = v24;
        LODWORD(v23) = 0;
        v16 = core::char::methods::encode_utf8_raw(v15, &v23);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v33, v16);
        v29 = v34;
        v28 = v33;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v30,
          &unk_6A609,
          aFlags);
        alloc::str::<impl str>::replace(
          (unsigned int)&v33,
          (unsigned int)aCompletionresu,
          96,
          (unsigned int)aDashName,
          11,
          DWORD2(v37),
          v38);
        alloc::str::<impl str>::replace(
          (unsigned int)&v23,
          DWORD2(v33),
          (_DWORD)v34,
          (unsigned int)aName_1,
          6,
          DWORD2(v28),
          (__int64)v29);
        alloc::str::<impl str>::replace((unsigned int)&v25, DWORD2(v23), v24, (unsigned int)aDoc, 5, v12, v13);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v30,
          v26,
          (char *)v26 + v27);
        core::ptr::drop_in_place<alloc::string::String>(&v25);
        core::ptr::drop_in_place<alloc::string::String>(&v23);
        core::ptr::drop_in_place<alloc::string::String>(&v33);
        core::ptr::drop_in_place<alloc::string::String>(&v28);
        core::ptr::drop_in_place<alloc::string::String>(&v37);
      }
      *(_QWORD *)&v17 = (*(__int64 (__fastcall **)(_QWORD))(v4[1] + 64LL))(*v4);
      if ( (_QWORD)v17 )
      {
        v37 = v17;
        v25 = &v37;
        v26 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v33 = &off_3E5EE8;
        *((_QWORD *)&v33 + 1) = 1LL;
        v36 = 0LL;
        v34 = (__int128 *)&v25;
        v35 = 1LL;
        core::option::Option<T>::map_or_else(&v23, 0LL, *((_QWORD *)&v17 + 1), &v33);
        v28 = v23;
        v29 = (_QWORD *)v24;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v30,
          &unk_6A609,
          aFlags);
        alloc::str::<impl str>::replace(
          (unsigned int)&v33,
          (unsigned int)aCompletionresu,
          96,
          (unsigned int)aDashName,
          11,
          DWORD2(v28),
          (__int64)v29);
        alloc::str::<impl str>::replace(
          (unsigned int)&v23,
          DWORD2(v33),
          (_DWORD)v34,
          (unsigned int)aName_1,
          6,
          v37,
          *((__int64 *)&v37 + 1));
        alloc::str::<impl str>::replace((unsigned int)&v25, DWORD2(v23), v24, (unsigned int)aDoc, 5, v12, v13);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v30,
          v26,
          (char *)v26 + v27);
        core::ptr::drop_in_place<alloc::string::String>(&v25);
        core::ptr::drop_in_place<alloc::string::String>(&v23);
        core::ptr::drop_in_place<alloc::string::String>(&v33);
        core::ptr::drop_in_place<alloc::string::String>(&v28);
      }
      core::ptr::drop_in_place<alloc::string::String>(&v39);
      core::ptr::drop_in_place<alloc::string::String>(v43);
      v3 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v42);
      v4 = v5;
    }
    while ( v5 );
    v18 = v31;
    v19 = v32;
  }
  else
  {
    v18 = 1;
    v19 = 0LL;
  }
  started = core::str::<impl str>::trim_start_matches(aUsingNamespace, 820LL);
  alloc::str::<impl str>::replace(v41, started, v21, (unsigned int)aFlags, 7, v18, v19);
  return core::ptr::drop_in_place<alloc::string::String>(&v30);
}