__int64 __fastcall rg::flags::complete::fish::generate(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r12
  int v8; // eax
  int v9; // edx
  int v10; // r12d
  __int64 v11; // r15
  char v12; // al
  const char *v13; // rsi
  const char *v14; // rdx
  void (__fastcall *v15)(__int64, void *, const char *); // rbp
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // r13
  unsigned __int8 v22; // dl
  __int64 v23; // rax
  char v24; // al
  __int64 result; // rax
  _OWORD *v26; // rcx
  __int128 v27; // [rsp+10h] [rbp-158h] BYREF
  __int64 v28; // [rsp+20h] [rbp-148h]
  __int128 v29; // [rsp+30h] [rbp-138h] BYREF
  int **v30; // [rsp+40h] [rbp-128h]
  __int64 v31; // [rsp+48h] [rbp-120h]
  __int64 v32; // [rsp+50h] [rbp-118h]
  _BYTE v33[8]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v34; // [rsp+68h] [rbp-100h]
  __int64 v35; // [rsp+70h] [rbp-F8h]
  __int128 v36; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v37; // [rsp+88h] [rbp-E0h]
  __int128 v38; // [rsp+90h] [rbp-D8h] BYREF
  _DWORD **v39; // [rsp+A0h] [rbp-C8h]
  __int128 v40; // [rsp+B0h] [rbp-B8h] BYREF
  int **v41; // [rsp+C0h] [rbp-A8h]
  int *v42; // [rsp+D0h] [rbp-98h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+D8h] [rbp-90h]
  __int64 v44; // [rsp+E0h] [rbp-88h]
  int v45; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-78h]
  __int64 v47; // [rsp+F8h] [rbp-70h]
  __int64 v48; // [rsp+100h] [rbp-68h]
  __int64 v49; // [rsp+108h] [rbp-60h]
  __int64 v50; // [rsp+110h] [rbp-58h]
  __int64 (__fastcall *v51)(__int64); // [rsp+118h] [rbp-50h]
  _BYTE v52[8]; // [rsp+120h] [rbp-48h] BYREF
  __int64 v53; // [rsp+128h] [rbp-40h]
  __int64 v54; // [rsp+130h] [rbp-38h]

  v48 = a1;
  *(_QWORD *)&v36 = 0LL;
  *((_QWORD *)&v36 + 1) = 1LL;
  v37 = 0LL;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v36,
    &unk_69E36,
    aS_3);
  alloc::string::String::push(&v36, 10LL);
  v1 = 0LL;
  while ( 2 )
  {
    v2 = *(_QWORD *)((char *)&unk_3E9308 + v1);
    v3 = *(_QWORD *)((char *)&unk_3E9308 + v1 + 8);
    v51 = *(__int64 (__fastcall **)(__int64))(v3 + 40);
    if ( (v51(v2) & 1) != 0 )
    {
      v45 = (unsigned __int8)v4;
      v42 = &v45;
      v43 = <char as core::fmt::Display>::fmt;
      *(_QWORD *)&v29 = &off_3E9988;
      *((_QWORD *)&v29 + 1) = 1LL;
      v32 = 0LL;
      v30 = &v42;
      v31 = 1LL;
      core::option::Option<T>::map_or_else(&v27, 0LL, v4, &v29);
      v38 = v27;
      v39 = (_DWORD **)v28;
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v29, 1LL);
      v39 = v30;
      v38 = v29;
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(v3 + 48))(v2);
    v7 = v6;
    v8 = (*(__int64 (__fastcall **)(__int64))(v3 + 88))(v2);
    alloc::str::<impl str>::replace(
      (unsigned int)v52,
      v8,
      v9,
      (unsigned int)asc_6A233,
      1,
      (unsigned int)&unk_6A23A,
      2LL);
    alloc::str::<impl str>::replace(
      (unsigned int)&v29,
      (unsigned int)aCompleteCRgSho,
      43,
      (unsigned int)aShort,
      7,
      DWORD2(v38),
      (__int64)v39);
    v49 = v7;
    v50 = v5;
    alloc::str::<impl str>::replace((unsigned int)&v27, DWORD2(v29), (_DWORD)v30, (unsigned int)aLong, 6, v5, v7);
    v10 = v53;
    v11 = v54;
    alloc::str::<impl str>::replace((unsigned int)v33, DWORD2(v27), v28, (unsigned int)aDoc, 5, v53, v54);
    core::ptr::drop_in_place<alloc::string::String>(&v27);
    core::ptr::drop_in_place<alloc::string::String>(&v29);
    v12 = (*(__int64 (__fastcall **)(__int64))(v3 + 112))(v2);
    v13 = (const char *)&unk_6A22D;
    v14 = asc_6A233;
    switch ( v12 )
    {
      case 0:
        v15 = *(void (__fastcall **)(__int64, void *, const char *))(v3 + 104);
        v15(v2, &unk_6A22D, asc_6A233);
        if ( v16 )
        {
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            v33,
            &unk_6A1CB,
            &unk_6A1D6);
          v17 = ((__int64 (__fastcall *)(__int64))v15)(v2);
          alloc::str::join_generic_copy(&v29, v17, v18, asc_69B32, 1LL);
          v28 = (__int64)v30;
          v27 = v29;
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            v33,
            *((_QWORD *)&v29 + 1),
            (char *)v30 + *((_QWORD *)&v29 + 1));
          core::ptr::drop_in_place<alloc::string::String>(&v27);
          v13 = asc_6A233;
          v14 = (const char *)&unk_6A234;
          goto LABEL_12;
        }
        v24 = (*(__int64 (__fastcall **)(__int64))(v3 + 32))(v2);
        v13 = (const char *)&unk_6A234;
        v14 = (const char *)&unk_6A23A;
        if ( !v24 )
          goto LABEL_12;
        goto LABEL_13;
      case 1:
        goto LABEL_12;
      case 2:
        v13 = (const char *)&unk_6A208;
        v14 = (const char *)&unk_6A22D;
        goto LABEL_12;
      case 3:
        v13 = (const char *)&unk_6A1D6;
        v14 = (const char *)&unk_6A208;
        goto LABEL_12;
      case 4:
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          v33,
          &unk_6A1CB,
          &unk_6A1D6);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          v33,
          aThisIsImpossib,
          asc_69ABF);
        v13 = asc_6A233;
        v14 = (const char *)&unk_6A234;
LABEL_12:
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          v33,
          v13,
          v14);
LABEL_13:
        alloc::string::String::push(v33, 10LL);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v36,
          v34,
          v34 + v35);
        v20 = (*(__int64 (__fastcall **)(__int64))(v3 + 64))(v2);
        if ( v20 )
        {
          v21 = v19;
          if ( (v51(v2) & 1) != 0 )
          {
            LODWORD(v27) = 0;
            v23 = core::char::methods::encode_utf8_raw(v22, &v27);
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v29, v23);
          }
          else
          {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v29, 1LL);
          }
          v41 = v30;
          v40 = v29;
          alloc::str::<impl str>::replace(
            (unsigned int)&v29,
            (unsigned int)aCompleteCRgLNe,
            77,
            (unsigned int)aNegated,
            9,
            v20,
            v21);
          alloc::str::<impl str>::replace(
            (unsigned int)&v27,
            DWORD2(v29),
            (_DWORD)v30,
            (unsigned int)aShort,
            7,
            DWORD2(v40),
            (__int64)v41);
          alloc::str::<impl str>::replace((unsigned int)&v42, DWORD2(v27), v28, (unsigned int)aLong, 6, v50, v49);
          alloc::str::<impl str>::replace((unsigned int)&v45, (_DWORD)v43, v44, (unsigned int)aDoc, 5, v10, v11);
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            &v36,
            v46,
            v46 + v47);
          core::ptr::drop_in_place<alloc::string::String>(&v45);
          core::ptr::drop_in_place<alloc::string::String>(&v42);
          core::ptr::drop_in_place<alloc::string::String>(&v27);
          core::ptr::drop_in_place<alloc::string::String>(&v29);
          core::ptr::drop_in_place<alloc::string::String>(&v40);
        }
        core::ptr::drop_in_place<alloc::string::String>(v33);
        core::ptr::drop_in_place<alloc::string::String>(v52);
        core::ptr::drop_in_place<alloc::string::String>(&v38);
        v1 += 16LL;
        if ( v1 != 1664 )
          continue;
        result = v37;
        v26 = (_OWORD *)v48;
        *(_QWORD *)(v48 + 16) = v37;
        *v26 = v36;
        return result;
    }
  }
}