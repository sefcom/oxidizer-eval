__int64 __fastcall fd::cli::Opts::max_results(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = core::option::Option<T>::filter(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56));
  return core::option::Option<T>::or_else(v1, v2, *(unsigned __int8 *)(a1 + 497));
}