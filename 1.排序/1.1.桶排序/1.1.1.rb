def bucket_sort(input)
  bucket = []
  
  input.each do |item|
    (bucket[item] == nil) ? bucket[item] = 1 : bucket[item] += 1
  end

  bucket.each_with_index do |item, key|
    item.times { printf("%d ", key) } if item != nil
  end
end

bucket_sort([5, 3, 7, 5, 9])
