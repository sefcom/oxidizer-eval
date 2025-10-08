volatile signed __int64 *__fastcall just::recipe_resolver::RecipeResolver::resolve_dependency(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  volatile signed __int64 *result; // rax
  volatile signed __int64 **v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rcx
  char v17; // cl
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  int v21; // esi
  _QWORD *v22; // [rsp+10h] [rbp-2B8h]
  __int64 v23; // [rsp+18h] [rbp-2B0h]
  _QWORD v27[2]; // [rsp+38h] [rbp-290h] BYREF
  volatile signed __int64 *v28; // [rsp+48h] [rbp-280h] BYREF
  __int128 v29; // [rsp+50h] [rbp-278h]
  __int128 v30; // [rsp+60h] [rbp-268h]
  __int128 v31; // [rsp+70h] [rbp-258h]
  __int128 v32; // [rsp+80h] [rbp-248h]
  char v33; // [rsp+90h] [rbp-238h]
  _BYTE v34[7]; // [rsp+91h] [rbp-237h]
  _QWORD src[32]; // [rsp+98h] [rbp-230h] BYREF
  _QWORD dest[38]; // [rsp+198h] [rbp-130h] BYREF

  v5 = *(_QWORD *)(a3 + 32);
  v6 = *(_QWORD *)(a3 + 40);
  v7 = just::namepath::Namepath::last(v5, v6);
  v8 = just::token::Token::lexeme(v7);
  v27[0] = v8;
  v27[1] = v9;
  if ( v6 <= 1 )
  {
    v11 = (volatile signed __int64 **)alloc::collections::btree::map::BTreeMap<K,V,A>::get(
                                        *(_QWORD *)(a2 + 32),
                                        *(_QWORD *)(a2 + 40),
                                        v8,
                                        v9);
    if ( v11 )
    {
      if ( _InterlockedIncrement64(*v11) <= 0 )
        BUG();
      result = *v11;
      *(_QWORD *)a1 = result;
      *(_BYTE *)(a1 + 72) = 37;
    }
    else
    {
      v22 = *(_QWORD **)(a5 + 8);
      v23 = *(_QWORD *)(a5 + 16);
      if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(v27, v22, v23) )
      {
        if ( !v23 )
          core::panicking::panic_bounds_check(0LL, 0LL, &off_430D38);
        alloc::vec::Vec<T,A>::push(a5, *v22, v22[1], &off_430D50);
        v12 = just::namepath::Namepath::last(v5, v6);
        v13 = just::token::Token::lexeme(a4 + 144);
        v15 = v14;
        v16 = *(_QWORD *)(a5 + 8) + 16LL * *(_QWORD *)(a5 + 16);
        v28 = *(volatile signed __int64 **)(a5 + 8);
        *(_QWORD *)&v29 = v16;
        *((_QWORD *)&v29 + 1) = a3;
        LOBYTE(v30) = 0;
        core::iter::traits::iterator::Iterator::collect(&src[1], &v28);
        src[4] = v13;
        src[5] = v15;
        src[0] = 0x8000000000000017LL;
        return (volatile signed __int64 *)just::token::Token::error(a1, v12, src);
      }
      else
      {
        alloc::collections::btree::map::BTreeMap<K,V,A>::remove(src);
        result = 0LL;
        if ( __OFSUB__(0LL, src[0])
          || (memcpy(dest, src, 0x100uLL),
              just::recipe_resolver::RecipeResolver::resolve_recipe((__int64)&v28, (_QWORD *)a2, a5, dest),
              v17 = v33,
              result = v28,
              v33 == 37) )
        {
          *(_QWORD *)a1 = result;
          *(_BYTE *)(a1 + 72) = 37;
        }
        else
        {
          v18 = v29;
          v19 = v30;
          v20 = v31;
          *(_OWORD *)(a1 + 56) = v32;
          *(_OWORD *)(a1 + 40) = v20;
          *(_OWORD *)(a1 + 24) = v19;
          *(_OWORD *)(a1 + 8) = v18;
          v21 = *(_DWORD *)&v34[3];
          *(_DWORD *)(a1 + 73) = *(_DWORD *)v34;
          *(_DWORD *)(a1 + 76) = v21;
          *(_QWORD *)a1 = result;
          *(_BYTE *)(a1 + 72) = v17;
        }
      }
    }
  }
  else
  {
    result = just::analyzer::Analyzer::resolve_recipe(v5, v6, *(_QWORD **)(a2 + 24), (_QWORD *)(a2 + 32));
    *(_QWORD *)a1 = result;
    *(_BYTE *)(a1 + 72) = 37;
  }
  return result;
}