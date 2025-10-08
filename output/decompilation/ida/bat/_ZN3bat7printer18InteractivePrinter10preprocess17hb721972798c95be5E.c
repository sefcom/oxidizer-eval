__int64 __fastcall bat::printer::InteractivePrinter::preprocess(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rax

  v5 = *(_QWORD *)(a2 + 264);
  if ( v5 )
    return bat::preprocessor::expand_tabs(a1, a3, a4, v5, a5);
  *a5 += a4;
  return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1);
}