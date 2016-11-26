clear all;
close all;

%value_rank = 30;
%original = imread('1.gif');
original = input('Enter the Matrix');
value_rank = input('Enter the new Dimension');
original = im2double(original);

[U, S, V] = svd(original);

for r=1:value_rank
    S1(:,r) = S(:,r);
    V1(:,r) = V(:,r);
end

new_matrix = U*S1*transpose(V1)


%figure
%imshow(new_image);
