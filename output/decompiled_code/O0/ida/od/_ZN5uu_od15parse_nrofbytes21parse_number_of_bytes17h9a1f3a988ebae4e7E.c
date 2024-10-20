__int64 __fastcall uu_od::parse_nrofbytes::parse_number_of_bytes(__int64 a1, _WORD *a2, size_t a3)
{
  __int64 v5; // r12
  int v6; // ebp
  char v7; // r13
  const void *v8; // rax
  size_t v9; // rdx
  unsigned __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  int v13; // edx
  unsigned __int64 v14; // rsi
  size_t v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  void *v19; // r13
  __int64 result; // rax
  char v21; // [rsp+3h] [rbp-155h] BYREF
  unsigned int v22; // [rsp+4h] [rbp-154h]
  void *v23; // [rsp+8h] [rbp-150h] BYREF
  __int64 v24; // [rsp+10h] [rbp-148h]
  void *dest; // [rsp+18h] [rbp-140h]
  __int64 v26; // [rsp+20h] [rbp-138h]
  __int128 *v27; // [rsp+28h] [rbp-130h]
  __int64 (__fastcall **v28)(); // [rsp+30h] [rbp-128h]
  __int64 v29; // [rsp+38h] [rbp-120h]
  char v30; // [rsp+40h] [rbp-118h]
  __int128 v31; // [rsp+48h] [rbp-110h] BYREF
  __int64 v32; // [rsp+58h] [rbp-100h]
  __int16 v33; // [rsp+68h] [rbp-F0h]
  char v34; // [rsp+6Ah] [rbp-EEh]
  _QWORD v35[2]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v36[8]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v37; // [rsp+88h] [rbp-D0h]
  __int128 v38; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-B8h]
  _QWORD v40[2]; // [rsp+B0h] [rbp-A8h] BYREF
  _QWORD v41[3]; // [rsp+C0h] [rbp-98h] BYREF
  char v42; // [rsp+D8h] [rbp-80h]
  __int128 v43; // [rsp+E0h] [rbp-78h]
  __int64 v44; // [rsp+F0h] [rbp-68h]
  __int128 v45; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v46; // [rsp+108h] [rbp-50h]
  __int128 v47; // [rsp+110h] [rbp-48h] BYREF
  __int64 v48; // [rsp+120h] [rbp-38h]

  if ( a3 < 2 || (v5 = 2LL, v6 = 16, v7 = 1, *a2 != 30768) && *a2 != 22576 )
  {
    LODWORD(v23) = 0;
    v8 = (const void *)core::char::methods::encode_utf8_raw(48LL, &v23, 4LL);
    if ( v9 > a3 || bcmp(v8, a2, v9) )
    {
      if ( !a2 )
        core::str::slice_error_fail(0LL, a3, 0LL, a3, &off_12D1F0);
      v33 = 0;
      v34 = 0;
      *(_QWORD *)&v31 = 0LL;
      v32 = 0LL;
      uucore::parser::parse_size::Parser::parse(&v38, &v31, a2, a3);
      if ( (_QWORD)v38 == 3LL )
      {
        if ( !*((_QWORD *)&v39 + 1) )
        {
          v10 = v39;
LABEL_42:
          *(_QWORD *)(a1 + 8) = v10;
          *(_QWORD *)a1 = 3LL;
          return a1;
        }
        v41[0] = 0LL;
        v41[1] = a2;
        v41[2] = a3;
        v42 = 1;
        v40[0] = v41;
        v40[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v23 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
        v24 = 2LL;
        v27 = 0LL;
        dest = v40;
        v26 = 1LL;
        alloc::fmt::format(&v47, &v23);
        *(_QWORD *)a1 = 2LL;
        *(_OWORD *)(a1 + 8) = v47;
        v12 = v48;
LABEL_45:
        *(_QWORD *)(a1 + 24) = v12;
        return a1;
      }
      v11 = v38;
      *(_OWORD *)(a1 + 16) = v39;
      *(_OWORD *)a1 = v11;
      return a1;
    }
    v7 = 0;
    v6 = 8;
    v5 = 0LL;
  }
  v35[0] = a2;
  v35[1] = (char *)a2 + a3;
  v14 = 1LL;
  v22 = v6;
  if ( (unsigned int)core::str::validations::next_code_point_reverse(v35) )
  {
    if ( (v13 ^ 0xD800u) - 2048 >= 0x10F800 )
      core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_12_llvm_6296603921265638786, 57LL);
    switch ( v13 )
    {
      case 'B':
        v15 = a3;
        if ( !v7 )
        {
          if ( a3 >= 2 )
          {
            v15 = a3 - 2;
            switch ( (unsigned int)<core::iter::adapters::rev::Rev<I> as core::iter::traits::iterator::Iterator>::next(
                                     v35,
                                     1LL) )
            {
              case 'E':
                v14 = 1000000000000000000LL;
                goto LABEL_37;
              case 'G':
                v14 = 1000000000LL;
                goto LABEL_37;
              case 'K':
              case 'k':
                v14 = 1000LL;
                goto LABEL_37;
              case 'M':
              case 'm':
                v14 = 1000000LL;
                goto LABEL_37;
              case 'P':
                v14 = 1000000000000000LL;
                goto LABEL_37;
              case 'T':
                v14 = 1000000000000LL;
                goto LABEL_37;
              default:
                <str as alloc::string::ToString>::to_string(&v45, a2, a3);
                *(_QWORD *)a1 = 1LL;
                *(_OWORD *)(a1 + 8) = v45;
                v12 = v46;
                goto LABEL_45;
            }
          }
          core::panicking::panic_const::panic_const_sub_overflow(&off_12D2B0);
        }
        return result;
      case 'E':
        v15 = a3;
        if ( !v7 )
        {
          if ( !a3 )
            core::panicking::panic_const::panic_const_sub_overflow(&off_12D298);
          v15 = a3 - 1;
          v14 = 0x1000000000000000LL;
        }
        break;
      case 'G':
        if ( !a3 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_12D250);
        v15 = a3 - 1;
        v14 = 0x40000000LL;
        break;
      case 'K':
      case 'k':
        if ( !a3 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_12D220);
        v15 = a3 - 1;
        v14 = 1024LL;
        break;
      case 'M':
      case 'm':
        if ( !a3 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_12D238);
        v15 = a3 - 1;
        v14 = 0x100000LL;
        break;
      case 'P':
        if ( !a3 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_12D280);
        v15 = a3 - 1;
        v14 = 0x4000000000000LL;
        break;
      case 'T':
        if ( !a3 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_12D268);
        v15 = a3 - 1;
        v14 = 0x10000000000LL;
        break;
      case 'b':
        v15 = a3;
        if ( !v7 )
        {
          if ( !a3 )
            core::panicking::panic_const::panic_const_sub_overflow(&off_12D208);
          v15 = a3 - 1;
          v14 = 512LL;
        }
        break;
      default:
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    v15 = a3;
  }
LABEL_37:
  v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v5,
          v15,
          a2,
          a3);
  if ( !v16 )
    core::str::slice_error_fail(a2, a3, v5, v15, &off_12D2C8);
  core::num::<impl u64>::from_str_radix(v36, v16, v17, v22);
  if ( (v36[0] & 1) != 0 )
  {
    v21 = v36[1];
    *(_QWORD *)&v31 = 0LL;
    *((_QWORD *)&v31 + 1) = 1LL;
    v32 = 0LL;
    v29 = 32LL;
    v30 = 3;
    v23 = 0LL;
    dest = 0LL;
    v27 = &v31;
    v28 = &anon_03522450585ae836116edbf29800e378_8_llvm_5073154966127019408;
    if ( (unsigned __int8)<core::num::error::ParseIntError as core::fmt::Display>::fmt(&v21, &v23) )
      core::result::unwrap_failed(
        anon_03522450585ae836116edbf29800e378_10_llvm_5073154966127019408,
        55LL,
        v41,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_03522450585ae836116edbf29800e378_12_llvm_5073154966127019408);
    v43 = v31;
    v44 = v32;
    *(_QWORD *)a1 = 1LL;
    *(_OWORD *)(a1 + 8) = v43;
    v12 = v44;
    goto LABEL_45;
  }
  v10 = v37 * v14;
  if ( is_mul_ok(v37, v14) )
    goto LABEL_42;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v23, a3, 0LL);
  v18 = v24;
  if ( v23 )
    alloc::raw_vec::handle_error(v24, dest);
  v19 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest, 1LL, 1LL, a3);
  memcpy(v19, a2, a3);
  *(_QWORD *)a1 = 2LL;
  *(_QWORD *)(a1 + 8) = v18;
  *(_QWORD *)(a1 + 16) = v19;
  *(_QWORD *)(a1 + 24) = a3;
  return a1;
}
