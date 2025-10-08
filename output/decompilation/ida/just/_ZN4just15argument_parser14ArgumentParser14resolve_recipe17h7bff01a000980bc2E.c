__int64 __fastcall just::argument_parser::ArgumentParser::resolve_recipe(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 result; // rax
  _BYTE *v13; // rdx
  __int64 v14; // rsi
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // [rsp+8h] [rbp-110h] BYREF
  __int64 v23; // [rsp+18h] [rbp-100h]
  __int128 v24; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v25; // [rsp+30h] [rbp-E8h]
  __int64 v26; // [rsp+40h] [rbp-D8h]
  _BYTE v27[49]; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v28; // [rsp+79h] [rbp-9Fh]
  __int128 v29; // [rsp+89h] [rbp-8Fh]
  _BYTE v30[23]; // [rsp+99h] [rbp-7Fh]
  __int128 v31; // [rsp+B0h] [rbp-68h]
  __int64 v32; // [rsp+C0h] [rbp-58h]
  _QWORD v33[9]; // [rsp+D0h] [rbp-48h] BYREF

  *(_QWORD *)&v22 = 0LL;
  *((_QWORD *)&v22 + 1) = 8LL;
  v23 = 0LL;
  v26 = a4;
  v33[0] = a3;
  v33[1] = a3 + 16 * a4;
  v33[2] = 0LL;
  while ( 1 )
  {
    v5 = (_QWORD *)a2;
    v6 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v33);
    if ( !v7 )
      break;
    v8 = v6;
    v9 = <&T as core::convert::AsRef<U>>::as_ref(*v7, v7[1]);
    v11 = v10;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v27, v9);
    *(_QWORD *)&v25 = *(_QWORD *)&v27[16];
    v24 = *(_OWORD *)v27;
    alloc::vec::Vec<T,A>::push(&v22, &v24, &off_42DB00);
    a2 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v5[84], v5[85], v9, v11);
    if ( !a2 )
    {
      result = just::justfile::Justfile::get_recipe(v5, v9, v11);
      if ( result )
      {
        v13 = (_BYTE *)a1;
        *(_QWORD *)(a1 + 24) = v23;
        *(_OWORD *)(a1 + 8) = v22;
        *(_QWORD *)(a1 + 32) = result;
        *(_QWORD *)(a1 + 40) = v8 + 1;
LABEL_9:
        *v13 = 56;
        return result;
      }
      alloc::str::join_generic_copy(v27, *((_QWORD *)&v22 + 1), v23, asc_6E4F0, 1LL);
      v32 = *(_QWORD *)&v27[16];
      v31 = *(_OWORD *)v27;
      just::justfile::Justfile::suggest_recipe(&v24, v5, v9, v11);
      *(_QWORD *)(a1 + 56) = v32;
      *(_OWORD *)(a1 + 40) = v31;
      *(_OWORD *)&v27[7] = v24;
      *(_OWORD *)&v27[23] = v25;
      *(_BYTE *)a1 = 52;
      v18 = *(_OWORD *)&v27[16];
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v27;
      *(_OWORD *)(a1 + 17) = v18;
      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v27[31];
      return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v22);
    }
  }
  v14 = v5[83];
  if ( v14 )
  {
    just::recipe::Recipe<D>::check_can_be_default_recipe(v27, v14 + 16);
    v15 = v27[0];
    if ( v27[0] == 56 )
    {
      v16 = just::token::Token::lexeme(v5[83] + 160LL);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v27, v16);
      *(_QWORD *)&v25 = *(_QWORD *)&v27[16];
      v24 = *(_OWORD *)v27;
      alloc::vec::Vec<T,A>::push(&v22, &v24, &off_42DAE8);
      v17 = v5[83];
      v13 = (_BYTE *)a1;
      *(_QWORD *)(a1 + 24) = v23;
      *(_OWORD *)(a1 + 8) = v22;
      *(_QWORD *)(a1 + 32) = v17 + 16;
      result = v26;
      *(_QWORD *)(a1 + 40) = v26;
      goto LABEL_9;
    }
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v30[15];
    *(_OWORD *)(a1 + 81) = *(_OWORD *)v30;
    *(_OWORD *)(a1 + 65) = v29;
    v19 = *(_OWORD *)&v27[1];
    v20 = *(_OWORD *)&v27[17];
    v21 = *(_OWORD *)&v27[33];
    *(_OWORD *)(a1 + 49) = v28;
    *(_OWORD *)(a1 + 33) = v21;
    *(_OWORD *)(a1 + 17) = v20;
    *(_OWORD *)(a1 + 1) = v19;
    *(_BYTE *)a1 = v15;
  }
  else
  {
    *(_BYTE *)a1 = (v5[89] == 0LL) | 0x24;
  }
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v22);
}