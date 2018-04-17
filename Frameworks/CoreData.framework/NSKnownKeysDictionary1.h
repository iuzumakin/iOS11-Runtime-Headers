/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int  _cd_rc;
    int  _count;
    NSKnownKeysMappingStrategy * _keySearch;
    /* Warning: unhandled array encoding: '[0@]' */ id  _values;
}

+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)init;
+ (id)initForKeys:(id)arg1;
+ (id)initWithCapacity:(unsigned long long)arg1;
+ (id)initWithCoder:(id)arg1;
+ (id)initWithDictionary:(id)arg1;
+ (id)initWithDictionary:(id)arg1 copyItems:(bool)arg2;
+ (id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned long long)arg3;
+ (id)initWithSearchStrategy:(id)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)_countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 forKeys:(bool)arg4;
- (bool)_isDeallocating;
- (void)_recount;
- (void)_setValues:(id*)arg1 retain:(bool)arg2;
- (bool)_tryRetain;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeys;
- (id)allValues;
- (Class)classForArchiver;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)getKeys:(id*)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (bool)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (const id*)knownKeyValuesPointer;
- (id)mapping;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setValues:(id*)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (const id*)values;

@end
