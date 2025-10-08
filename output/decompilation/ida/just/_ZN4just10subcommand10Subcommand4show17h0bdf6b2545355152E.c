__int64 __fastcall just::subcommand::Subcommand::show(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r14
  _QWORD *v14; // r15
  __int64 alias; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 recipe; // rax
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 result; // rax
  __int128 v27; // xmm1
  _BYTE v28[40]; // [rsp+8h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+38h] [rbp-80h] BYREF
  __int64 v30; // [rsp+48h] [rbp-70h]
  __int64 v31; // [rsp+50h] [rbp-68h]
  __int128 v32; // [rsp+58h] [rbp-60h] BYREF
  __int128 v33; // [rsp+68h] [rbp-50h] BYREF
  __int64 v34; // [rsp+80h] [rbp-38h] BYREF

  v31 = a2;
  v6 = *(_QWORD *)(a4 + 8);
  v7 = *(_QWORD *)(a4 + 16);
  v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v7 - 1, v6, v7, &off_431448);
  if ( v8 == 0 || v9 == 0 )
  {
    v10 = a3;
LABEL_3:
    if ( !v7 || (v11 = 3 * v7, (v12 = v6 + 24 * v7 - 24) == 0) )
      core::option::unwrap_failed(&off_431460);
    v13 = v6 + 8 * v11;
    v14 = v10;
    alias = just::justfile::Justfile::get_alias(v10[77], v10[78], *(_QWORD *)(v13 - 16), *(_QWORD *)(v13 - 8));
    if ( alias )
    {
      v34 = alias;
      v16 = just::token::Token::lexeme(*(_QWORD *)(alias + 24) + 160LL);
      recipe = just::justfile::Justfile::get_recipe((__int64)v14, v16, v17);
      if ( !recipe )
        core::option::unwrap_failed(&off_431478);
      v19 = recipe;
      *(_QWORD *)&v32 = &v34;
      *((_QWORD *)&v32 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v28 = &unk_42DBD8;
      *(_QWORD *)&v28[8] = 2LL;
      *(_QWORD *)&v28[32] = 0LL;
      *(_QWORD *)&v28[16] = &v32;
      *(_QWORD *)&v28[24] = 1LL;
      std::io::stdio::_print(v28);
      just::color::Color::stdout((__int64)&v33, v31 + 388);
      *(_QWORD *)&v32 = v19;
      *((_QWORD *)&v32 + 1) = &off_430370;
      *(_QWORD *)&v29 = &v32;
      *((_QWORD *)&v29 + 1) = <just::color_display::Wrapper as core::fmt::Display>::fmt;
      *(_QWORD *)v28 = &unk_42DBD8;
      *(_QWORD *)&v28[8] = 2LL;
      *(_QWORD *)&v28[32] = 0LL;
      *(_QWORD *)&v28[16] = &v29;
      *(_QWORD *)&v28[24] = 1LL;
      std::io::stdio::_print(v28);
      goto LABEL_15;
    }
    v24 = just::justfile::Justfile::get_recipe((__int64)v14, *(_QWORD *)(v13 - 16), *(_QWORD *)(v13 - 8));
    if ( v24 )
    {
      v25 = v24;
      just::color::Color::stdout((__int64)&v33, v31 + 388);
      *(_QWORD *)&v32 = v25;
      *((_QWORD *)&v32 + 1) = &off_430370;
      *(_QWORD *)&v29 = &v32;
      *((_QWORD *)&v29 + 1) = <just::color_display::Wrapper as core::fmt::Display>::fmt;
      *(_QWORD *)v28 = &unk_42DBD8;
      *(_QWORD *)&v28[8] = 2LL;
      *(_QWORD *)&v28[32] = 0LL;
      *(_QWORD *)&v28[16] = &v29;
      *(_QWORD *)&v28[24] = 1LL;
      std::io::stdio::_print(v28);
LABEL_15:
      result = a1;
      *(_BYTE *)a1 = 56;
      return result;
    }
    <alloc::string::String as core::clone::Clone>::clone(&v29, v12);
    just::justfile::Justfile::suggest_recipe((__int64)&v32, v14, *(_QWORD *)(v13 - 16), *(_QWORD *)(v13 - 8));
    *(_QWORD *)(a1 + 56) = v30;
    *(_OWORD *)(a1 + 40) = v29;
    *(_OWORD *)&v28[7] = v32;
    *(_OWORD *)&v28[23] = v33;
    *(_BYTE *)a1 = 52;
    v27 = *(_OWORD *)&v28[16];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v28;
    *(_OWORD *)(a1 + 17) = v27;
    result = *(_QWORD *)&v28[31];
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v28[31];
  }
  else
  {
    v20 = v9 + 24 * v8;
    v21 = v9 + 24;
    v10 = a3;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v9 + 8);
      v23 = *(_QWORD *)(v9 + 16);
      v9 = v21;
      v10 = (_QWORD *)alloc::collections::btree::map::BTreeMap<K,V,A>::get(v10[84], v10[85], v22, v23);
      if ( !v10 )
        break;
      v21 += 24LL;
      if ( v9 == v20 || !v9 )
        goto LABEL_3;
    }
    <T as alloc::string::SpecToString>::spec_to_string(v28, a4);
    result = *(_QWORD *)v28;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v28[8];
    *(_BYTE *)a1 = 53;
    *(_QWORD *)(a1 + 8) = result;
  }
  return result;
}