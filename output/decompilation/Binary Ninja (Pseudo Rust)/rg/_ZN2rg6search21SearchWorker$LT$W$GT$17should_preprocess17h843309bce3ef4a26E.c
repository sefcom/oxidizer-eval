
  fn rg::search::SearchWorker$LT$W$GT$::should_preprocess::h843309bce3ef4a26(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut result: i64 = 0;
    
    if !(0 + -(*arg1.byte_offset(0x280)))
    {
        if *arg1.byte_offset(0x230) == 0
        {
            result = 1;
            return 1;
        }
        
        let var_8_1: i64 = 0;
        result =
            ignore::overrides::Override::matched::h96500a335d15963e(arg1.byte_offset(0x218), arg2)
            != 1;
    }
    
    result
}
