__int64 __fastcall rg::flags::complete::bash::generate(__int64 a1)
{
  __int64 i; // rbx
  __int64 v2; // r12
  __int64 (__fastcall **v3)(_QWORD); // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // bp
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 j; // rbp
  __int64 v12; // r13
  __int64 v13; // r12
  void (__fastcall *v14)(__int64); // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // esi
  int v19; // edx
  __int64 v20; // rax
  __int128 v21; // rax
  int v22; // ebx
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 started; // rax
  _OWORD *v28; // rcx
  __int128 v30; // [rsp+10h] [rbp-128h] BYREF
  __int64 v31; // [rsp+20h] [rbp-118h]
  __int128 v32; // [rsp+30h] [rbp-108h] BYREF
  __int128 *v33; // [rsp+40h] [rbp-F8h]
  __int128 v34; // [rsp+50h] [rbp-E8h] BYREF
  __int128 *v35; // [rsp+60h] [rbp-D8h]
  __int64 v36; // [rsp+68h] [rbp-D0h]
  __int64 v37; // [rsp+70h] [rbp-C8h]
  __int64 v38; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+88h] [rbp-B0h]
  __int64 v40; // [rsp+90h] [rbp-A8h]
  __int64 v41; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-98h]
  __int64 v43; // [rsp+A8h] [rbp-90h]
  __int128 v44; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-78h]
  _QWORD v46[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v47; // [rsp+E0h] [rbp-58h] BYREF
  __int128 *v48; // [rsp+F0h] [rbp-48h]
  __int64 v49; // [rsp+100h] [rbp-38h]

  v49 = a1;
  v41 = 0LL;
  v42 = 1LL;
  v43 = 0LL;
  for ( i = 0LL; i != 1664; i += 16LL )
  {
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v41,
      asc_69ABF,
      &unk_69AC1);
    v2 = *(_QWORD *)((char *)&unk_3E9308 + i);
    v3 = *(__int64 (__fastcall ***)(_QWORD))((char *)&unk_3E9308 + i + 8);
    v4 = v3[6](v2);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v41,
      v4,
      v4 + v5);
    alloc::string::String::push(&v41, 32LL);
    if ( (v3[5](v2) & 1) != 0 )
    {
      v7 = v6;
      alloc::string::String::push(&v41, 45LL);
      alloc::string::String::push(&v41, v7);
      alloc::string::String::push(&v41, 32LL);
    }
    v9 = v3[8](v2);
    if ( v9 )
    {
      v10 = v8;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v41,
        asc_69ABF,
        &unk_69AC1);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v41,
        v9,
        v9 + v10);
      alloc::string::String::push(&v41, 32LL);
    }
  }
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v41,
    &unk_69AC1,
    aFlagCompreplyC);
  v38 = 0LL;
  v39 = 1LL;
  v40 = 0LL;
  for ( j = 0LL; j != 1664; j += 16LL )
  {
    v12 = *(_QWORD *)((char *)&unk_3E9308 + j);
    v13 = *(_QWORD *)((char *)&unk_3E9308 + j + 8);
    v14 = *(void (__fastcall **)(__int64))(v13 + 104);
    v14(v12);
    if ( v15 )
    {
      v16 = ((__int64 (__fastcall *)(__int64))v14)(v12);
      alloc::str::join_generic_copy(&v34, v16, v17, asc_69B32, 1LL);
      v33 = v35;
      v32 = v34;
      v18 = core::str::<impl str>::trim_end_matches(aFlagCompreplyC_0, 109LL);
      alloc::str::<impl str>::replace(
        (unsigned int)&v47,
        v18,
        v19,
        (unsigned int)aChoices,
        9,
        DWORD2(v32),
        (__int64)v33);
      core::ptr::drop_in_place<alloc::string::String>(&v32);
    }
    else
    {
      v20 = core::str::<impl str>::trim_end_matches(aFlagCompreplyC, 94LL);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v34, v20);
      v48 = v35;
      v47 = v34;
    }
    *(_QWORD *)&v21 = (*(__int64 (__fastcall **)(__int64))(v13 + 48))(v12);
    v30 = v21;
    *(_QWORD *)&v44 = &v30;
    *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v34 = &off_3E5EE8;
    *((_QWORD *)&v34 + 1) = 1LL;
    v37 = 0LL;
    v35 = &v44;
    v36 = 1LL;
    core::option::Option<T>::map_or_else(&v32, 0LL, *((_QWORD *)&v21 + 1), &v34);
    v44 = v32;
    v45 = (__int64)v33;
    v22 = DWORD2(v47);
    v23 = (int)v48;
    alloc::str::<impl str>::replace(
      (unsigned int)&v34,
      DWORD2(v47),
      (_DWORD)v48,
      (unsigned int)aFlag_0,
      6,
      DWORD2(v32),
      (__int64)v33);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v38,
      *((_QWORD *)&v34 + 1),
      (char *)v35 + *((_QWORD *)&v34 + 1));
    core::ptr::drop_in_place<alloc::string::String>(&v34);
    if ( ((*(__int64 (__fastcall **)(__int64))(v13 + 40))(v12) & 1) != 0 )
    {
      LODWORD(v46[0]) = (unsigned __int8)v24;
      *(_QWORD *)&v30 = v46;
      *((_QWORD *)&v30 + 1) = <char as core::fmt::Display>::fmt;
      *(_QWORD *)&v34 = &off_3E5EF8;
      *((_QWORD *)&v34 + 1) = 1LL;
      v37 = 0LL;
      v35 = &v30;
      v36 = 1LL;
      core::option::Option<T>::map_or_else(&v32, 0LL, v24, &v34);
      v30 = v32;
      v31 = (__int64)v33;
      alloc::str::<impl str>::replace((unsigned int)&v34, v22, v23, (unsigned int)aFlag_0, 6, DWORD2(v32), (__int64)v33);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v38,
        *((_QWORD *)&v34 + 1),
        (char *)v35 + *((_QWORD *)&v34 + 1));
      core::ptr::drop_in_place<alloc::string::String>(&v34);
      core::ptr::drop_in_place<alloc::string::String>(&v30);
    }
    v25 = (*(__int64 (__fastcall **)(__int64))(v13 + 64))(v12);
    if ( v25 )
    {
      v46[0] = v25;
      v46[1] = v26;
      *(_QWORD *)&v30 = v46;
      *((_QWORD *)&v30 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v34 = &off_3E5EE8;
      *((_QWORD *)&v34 + 1) = 1LL;
      v37 = 0LL;
      v35 = &v30;
      v36 = 1LL;
      core::option::Option<T>::map_or_else(&v32, 0LL, v26, &v34);
      v30 = v32;
      v31 = (__int64)v33;
      alloc::str::<impl str>::replace((unsigned int)&v34, v22, v23, (unsigned int)aFlag_0, 6, DWORD2(v32), (__int64)v33);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v38,
        *((_QWORD *)&v34 + 1),
        (char *)v35 + *((_QWORD *)&v34 + 1));
      core::ptr::drop_in_place<alloc::string::String>(&v34);
      core::ptr::drop_in_place<alloc::string::String>(&v30);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v44);
    core::ptr::drop_in_place<alloc::string::String>(&v47);
  }
  alloc::str::<impl str>::replace(
    (unsigned int)&v32,
    (unsigned int)aRgLocalICurPre,
    633,
    (unsigned int)aOpts_0,
    6,
    v42,
    v43);
  alloc::str::<impl str>::replace((unsigned int)&v30, DWORD2(v32), (_DWORD)v33, (unsigned int)aCases, 7, v39, v40);
  started = core::str::<impl str>::trim_start_matches(*((_QWORD *)&v30 + 1), v31);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v34, started);
  v28 = (_OWORD *)v49;
  *(_QWORD *)(v49 + 16) = v35;
  *v28 = v34;
  core::ptr::drop_in_place<alloc::string::String>(&v30);
  core::ptr::drop_in_place<alloc::string::String>(&v32);
  core::ptr::drop_in_place<alloc::string::String>(&v38);
  return core::ptr::drop_in_place<alloc::string::String>(&v41);
}