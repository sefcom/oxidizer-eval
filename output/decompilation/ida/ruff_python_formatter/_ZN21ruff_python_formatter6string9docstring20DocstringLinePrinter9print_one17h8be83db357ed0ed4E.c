__int64 __fastcall ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 *v9; // rax
  __int64 v10; // rdi
  bool v11; // zf
  unsigned __int8 v12; // al
  unsigned int v13; // eax
  unsigned int v14; // r15d
  int v15; // ebx
  bool v16; // cf
  unsigned int v17; // r12d
  unsigned int v18; // ebx
  __int64 *v19; // r15
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int8 v24; // al
  char v25; // r15
  int v26; // r15d
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 started; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  _BYTE v34[20]; // [rsp+8h] [rbp-A0h] BYREF
  int v35; // [rsp+1Ch] [rbp-8Ch]
  __int64 v36; // [rsp+20h] [rbp-88h]
  __int64 *v37; // [rsp+28h] [rbp-80h]
  _DWORD v38[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v39; // [rsp+38h] [rbp-70h]
  __int64 v40; // [rsp+40h] [rbp-68h]
  _BYTE v41[24]; // [rsp+48h] [rbp-60h] BYREF
  _DWORD v42[18]; // [rsp+60h] [rbp-48h] BYREF

  result = core::str::<impl str>::trim_end_matches(*(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16));
  if ( v6 )
  {
    v7 = result;
    v8 = v6;
    v9 = *(__int64 **)(a2 + 136);
    v10 = *v9;
    v37 = v9;
    v11 = *(_BYTE *)(ruff_formatter::formatter::Formatter<Context>::options(v10, v9[1]) + 10) == 0;
    v36 = a1;
    if ( v11 )
    {
      ruff_python_formatter::string::docstring::Indentation::from_str(v41, v7, v8);
      *(_QWORD *)v34 = v7;
      *(_QWORD *)&v34[8] = v8 + v7;
      v34[16] = 0;
      v24 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(v34);
      v25 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v24, 1LL);
      ruff_python_formatter::string::docstring::Indentation::trim_start(v42, v41, a2 + 112);
      if ( v25 || (v26 = v42[0], v42[0] == 5) )
      {
        ruff_python_formatter::string::docstring::Indentation::text_len(a2 + 112);
      }
      else
      {
        v13 = ruff_python_formatter::string::docstring::Indentation::text_len(a2 + 112);
        if ( v26 != 3 )
        {
LABEL_5:
          v14 = v13;
          if ( *(_BYTE *)(a2 + 148) )
          {
            v15 = *(_DWORD *)(a3 + 24);
            core::result::Result<T,E>::unwrap(HIDWORD(v8) != 0, &off_57CC48);
            v16 = __CFADD__(v15, (_DWORD)v8);
            v17 = v15 + v8;
            if ( v16 )
              core::panicking::panic(aAssertionFaile_0, 38LL, &off_57CC60);
            v18 = v14 + v15;
            if ( v18 > v17 )
              core::panicking::panic(aAssertionFaile_0, 38LL, &off_57F090);
            v38[0] = v18;
            v38[1] = v17;
            v19 = v37;
            <ruff_formatter::builders::SourceTextSliceBuilder as ruff_formatter::Format<Context>>::fmt(v34, v38, v37);
            result = *(unsigned int *)v34;
            if ( *(_DWORD *)v34 != 4 )
            {
LABEL_9:
              v20 = v36;
              *(_DWORD *)(v36 + 20) = v35;
              *(_OWORD *)(v20 + 4) = *(_OWORD *)&v34[4];
              *(_DWORD *)v20 = result;
              return result;
            }
          }
          else
          {
            v32 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                    v13,
                    v7,
                    v8);
            if ( !v32 )
              core::str::slice_error_fail(v7, v8, v14, v8, &off_57F130);
            v19 = v37;
            <ruff_formatter::builders::Text as ruff_formatter::Format<Context>>::fmt(v34, v32, v33, *v37, v37[1]);
            result = *(unsigned int *)v34;
            if ( *(_DWORD *)v34 != 4 )
              goto LABEL_9;
          }
          a1 = v36;
          if ( *(_BYTE *)(a3 + 28) )
            goto LABEL_24;
          goto LABEL_22;
        }
      }
    }
    else
    {
      *(_QWORD *)v34 = v7;
      *(_QWORD *)&v34[8] = v8 + v7;
      v34[16] = 0;
      v12 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(v34);
      if ( !(unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v12, 1LL) )
      {
        v13 = ruff_python_formatter::string::docstring::Indentation::text_len(a2 + 112);
        goto LABEL_5;
      }
    }
    ruff_python_formatter::string::docstring::Indentation::from_str(v34, v7, v8);
    v27 = ruff_python_formatter::string::docstring::Indentation::columns(v34);
    v28 = ruff_python_formatter::string::docstring::Indentation::columns(a2 + 112);
    alloc::slice::<impl [T]>::repeat(v34, v27 - v28);
    started = core::str::<impl str>::trim_start_matches(v7, v8);
    <alloc::string::String as core::ops::arith::Add<&str>>::add(v38, v34, started, v30);
    v19 = v37;
    <ruff_formatter::builders::Text as ruff_formatter::Format<Context>>::fmt(v34, v39, v40, *v37, v37[1]);
    v31 = *(_DWORD *)v34;
    a1 = v36;
    if ( *(_DWORD *)v34 != 4 )
    {
      *(_DWORD *)(v36 + 20) = v35;
      *(_OWORD *)(a1 + 4) = *(_OWORD *)&v34[4];
      *(_DWORD *)a1 = v31;
      return core::ptr::drop_in_place<alloc::string::String>(v38);
    }
    result = core::ptr::drop_in_place<alloc::string::String>(v38);
    if ( !*(_BYTE *)(a3 + 28) )
    {
LABEL_22:
      *(_WORD *)v34 = 513;
      v22 = *v19;
      v23 = v19[1];
      goto LABEL_23;
    }
  }
  else if ( !*(_BYTE *)(a3 + 28) )
  {
    v21 = *(__int64 **)(a2 + 136);
    *(_WORD *)v34 = 769;
    v22 = *v21;
    v23 = v21[1];
LABEL_23:
    result = (*(__int64 (__fastcall **)(__int64, _BYTE *))(v23 + 24))(v22, v34);
  }
LABEL_24:
  *(_DWORD *)a1 = 4;
  return result;
}