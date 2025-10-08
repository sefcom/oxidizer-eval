__int64 __fastcall just::evaluator::Evaluator::evaluate_line(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rbx
  int v8; // eax
  int v9; // edx
  __int64 started; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // al
  __int128 *v14; // rdi
  __int64 result; // rax
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int128 v20; // [rsp+20h] [rbp-108h] BYREF
  __int64 v21; // [rsp+30h] [rbp-F8h]
  _QWORD *v22; // [rsp+38h] [rbp-F0h]
  __int128 v23; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-D8h]
  _QWORD v25[3]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v26[31]; // [rsp+70h] [rbp-B8h]
  char v27; // [rsp+90h] [rbp-98h] BYREF
  _BYTE v28[31]; // [rsp+91h] [rbp-97h]
  __int128 v29; // [rsp+B0h] [rbp-78h]
  __int128 v30; // [rsp+C0h] [rbp-68h]
  __int128 v31; // [rsp+D0h] [rbp-58h]
  __int128 v32; // [rsp+E0h] [rbp-48h]
  __int64 v33; // [rsp+F0h] [rbp-38h]

  v22 = a2;
  *(_QWORD *)&v20 = 0LL;
  *((_QWORD *)&v20 + 1) = 1LL;
  v21 = 0LL;
  v25[0] = a3;
  v25[1] = a3 + (a4 << 7);
  v25[2] = 0LL;
  v5 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v25);
  if ( !v6 )
  {
LABEL_11:
    result = v21;
    *(_QWORD *)(a1 + 24) = v21;
    *(_OWORD *)(a1 + 8) = v20;
    *(_BYTE *)a1 = 56;
    return result;
  }
  v7 = v5;
  while ( 1 )
  {
    if ( *(_DWORD *)v6 == 18 )
    {
      v8 = just::token::Token::lexeme(v6 + 1);
      alloc::str::<impl str>::replace(
        (unsigned int)&v27,
        v8,
        v9,
        (unsigned int)asc_68968,
        4,
        (unsigned int)&unk_70957,
        2LL);
      started = *(_QWORD *)&v28[7];
      if ( ((v7 == 0) & a5) != 0 )
      {
        started = core::str::<impl str>::trim_start_matches(*(_QWORD *)&v28[7], *(_QWORD *)&v28[15]);
        v12 = started + v11;
      }
      else
      {
        v12 = *(_QWORD *)&v28[7] + *(_QWORD *)&v28[15];
      }
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v20,
        started,
        v12);
      v14 = (__int128 *)&v27;
      goto LABEL_3;
    }
    just::evaluator::Evaluator::evaluate_expression((__int64)&v27, v22, v6);
    v13 = v27;
    if ( v27 != 56 )
      break;
    *(_QWORD *)&v26[23] = *(_QWORD *)&v28[23];
    *(_OWORD *)&v26[7] = *(_OWORD *)&v28[7];
    v23 = *(_OWORD *)&v28[7];
    v24 = *(_QWORD *)&v28[23];
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v20,
      *(_QWORD *)&v28[15],
      *(_QWORD *)&v28[15] + *(_QWORD *)&v28[23]);
    v14 = &v23;
LABEL_3:
    core::ptr::drop_in_place<alloc::string::String>(v14);
    v7 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v25);
    if ( !v6 )
      goto LABEL_11;
  }
  v16 = v29;
  v17 = v30;
  *(_OWORD *)&v26[15] = *(_OWORD *)&v28[15];
  *(_OWORD *)v26 = *(_OWORD *)v28;
  *(_QWORD *)(a1 + 96) = v33;
  *(_OWORD *)(a1 + 80) = v32;
  *(_OWORD *)(a1 + 64) = v31;
  *(_OWORD *)(a1 + 48) = v17;
  *(_OWORD *)(a1 + 32) = v16;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v26[15];
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v26;
  *(_BYTE *)a1 = v13;
  return core::ptr::drop_in_place<alloc::string::String>(&v20);
}