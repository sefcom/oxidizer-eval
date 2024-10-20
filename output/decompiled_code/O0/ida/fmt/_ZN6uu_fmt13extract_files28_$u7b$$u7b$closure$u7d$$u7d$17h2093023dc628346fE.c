__int64 __fastcall uu_fmt::extract_files::{{closure}}(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  int v12; // [rsp+Ch] [rbp-ACh] BYREF
  __int128 v13; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+20h] [rbp-98h]
  __int64 v15; // [rsp+30h] [rbp-88h]
  _QWORD v16[2]; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-60h] BYREF
  __int128 v18; // [rsp+68h] [rbp-50h] BYREF
  __int64 v19; // [rsp+78h] [rbp-40h]
  __int128 v20; // [rsp+80h] [rbp-38h] BYREF
  __int64 v21; // [rsp+90h] [rbp-28h]

  if ( !*(_QWORD *)(a4 + 8) || *(__int64 *)(a4 + 16) < 0 )
    goto LABEL_18;
  core::num::<impl core::str::traits::FromStr for isize>::from_str(&v13);
  if ( (v13 & 1) != 0 || v13 >= 0 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&v20);
    *(_QWORD *)(a1 + 16) = v21;
    *(_OWORD *)a1 = v20;
    return a1;
  }
  if ( (**(_BYTE **)(a2 + 8) & 1) != 0 && !a3 )
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
    return a1;
  }
  v6 = *(_QWORD *)(a4 + 8);
  if ( !v6 || (v7 = *(_QWORD *)(a4 + 16), v7 < 0) )
LABEL_18:
    core::panicking::panic_nounwind(anon_295321c1b9ac16da4afd3a0029311bec_36_llvm_7620956122088650080, 162LL);
  v16[0] = *(_QWORD *)(a4 + 8);
  v16[1] = v6 + v7;
  if ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(v16, 1LL)
    || !(unsigned int)core::str::validations::next_code_point(v16) )
  {
    goto LABEL_19;
  }
  if ( (v8 ^ 0xD800u) - 2048 >= 0x10F800 )
    core::panicking::panic_nounwind(anon_6c54eb1e7b215b8ed1966ba3419445bf_11_llvm_11417008648433573330, 57LL);
  if ( v8 == 1114112 )
LABEL_19:
    core::option::expect_failed(
      anon_6de62410172ed548f47511db1f84ebf1_138_llvm_6488061759137378937,
      56LL,
      &anon_6de62410172ed548f47511db1f84ebf1_139_llvm_6488061759137378937);
  v12 = v8;
  v17[0] = &v12;
  v17[1] = <char as core::fmt::Display>::fmt;
  *(_QWORD *)&v13 = &anon_6de62410172ed548f47511db1f84ebf1_142_llvm_6488061759137378937;
  *((_QWORD *)&v13 + 1) = 2LL;
  *(_QWORD *)&v14 = v17;
  *((_QWORD *)&v14 + 1) = 1LL;
  v15 = 0LL;
  alloc::fmt::format::format_inner(&v18, &v13);
  *(_QWORD *)&v14 = v19;
  v13 = v18;
  DWORD2(v14) = 1;
  v9 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v9 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v10 = v13;
  v9[1] = v14;
  *v9 = v10;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = &anon_295321c1b9ac16da4afd3a0029311bec_54_llvm_7620956122088650080;
  return a1;
}
