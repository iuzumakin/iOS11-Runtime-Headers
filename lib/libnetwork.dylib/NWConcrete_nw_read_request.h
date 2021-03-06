/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_read_request : NSObject <OS_nw_read_request> {
    char * buffer;
    id /* block */  buffer_completion;
    bool  buffer_used_for_reading;
    bool  complete;
    NSObject<OS_dispatch_data> * data;
    id /* block */  data_completion;
    id /* block */  data_multiple_completion;
    id /* block */  data_timeout_completion;
    unsigned long long  max;
    id /* block */  message_completion;
    unsigned long long  min;
    NWConcrete_nw_read_request * next;
    NSObject<OS_dispatch_data> * pattern;
    const void * pattern_bytes;
    unsigned long long  pattern_length;
    unsigned long long  progress;
    NSObject<OS_nw_array> * read_array;
    id /* block */  timeout_block;
    long long  timeout_nanos;
    NSObject<OS_dispatch_source> * timeout_source;
    bool  timeout_timer_fired;
    int  variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
